#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>
#include <iterator>
#include <cassert>
using namespace std;

int old_in_max_heap = 0;
int old_in_min_heap = 0;
typedef pair<int, int> Node;

struct MaxCmp {
    bool operator()(Node& left, Node& right) {
        if (left == right) {
            return left.second > right.second;
        } else {
            return left < right;
        }
    }
};

struct MinCmp {
    bool operator()(Node& left, Node& right) {
        if (left == right) {
            return left.second > right.second;
        } else {
            return left > right;
        }
    }
};


typedef priority_queue<Node, vector<Node>, MaxCmp> MaxHeap;
typedef priority_queue<Node, vector<Node>, MinCmp> MinHeap;

void insert_heap(MaxHeap& max_heap, MinHeap& min_heap, Node target) {
    if (max_heap.empty()) {
        max_heap.push(target);
        return;
    }

    if (target > max_heap.top()) {
        min_heap.push(target);
    } else {
        max_heap.push(target);
    }
}

template<typename T>
void clear_old(T& t, int old_idx, int& counter) {
    while (!t.empty() && t.top().second <= old_idx) {
        t.pop();
        --counter;
    }
}

void balance_heap(MaxHeap& max_heap, MinHeap& min_heap, int old_idx) {
    /* balance value */

    clear_old(max_heap, old_idx, old_in_max_heap);
    clear_old(min_heap, old_idx, old_in_min_heap);

    while (!min_heap.empty() &&
           !max_heap.empty() &&
           min_heap.top() < max_heap.top()) {
        min_heap.push(max_heap.top());
        max_heap.pop();
        clear_old(max_heap, old_idx, old_in_max_heap);
        clear_old(min_heap, old_idx, old_in_min_heap);
    }
    /* balance size */
    while ((min_heap.size() - old_in_min_heap) <
            (max_heap.size() - old_in_max_heap)) {
        Node t = max_heap.top();
        max_heap.pop();
        min_heap.push(t);
        clear_old(max_heap, old_idx, old_in_max_heap);
        clear_old(min_heap, old_idx, old_in_min_heap);
    }
    while ((max_heap.size() - old_in_max_heap) <
            (min_heap.size() - old_in_min_heap)) {
        Node t = min_heap.top();
        min_heap.pop();
        max_heap.push(t);
        clear_old(max_heap, old_idx, old_in_max_heap);
        clear_old(min_heap, old_idx, old_in_min_heap);
    }

    assert(max_heap.top().second > old_idx);
    assert(min_heap.top().second > old_idx);

    /* max_heap size is greater or equal than min_heap */
}

void delete_old_from_heap(MaxHeap& max_heap, MinHeap& min_heap, Node target) {

    Node min_top = min_heap.top();
    Node max_top = max_heap.top();
    if (target <= max_top) {
        if (max_top == target) {
            max_heap.pop();
        } else {
            ++old_in_max_heap;
        }
    } else if (target >= min_top) {
        if (min_top == target) {
            min_heap.pop();
        } else {
            ++old_in_min_heap;
        }
    }
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, d;
    cin >> n >> d;

    MaxHeap max_heap;
    MinHeap min_heap;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int notices = 0;
    for (int i = 0; i < n; ++i) {
        if (d == 1) {
            if (i > 0) {
                if (arr[i] >= 2 * arr[i-1]) {
                    ++notices;
                }
            }
            continue;
        }
        if (i < d) {
            insert_heap(max_heap, min_heap, make_pair(arr[i], i));
            /* value index less than i - d will be delted */
            balance_heap(max_heap, min_heap, i - d);
        } else {
            long median;
            if (d & 0x1) {
                median = 2 * max_heap.top().first;
            } else {
                median = max_heap.top().first + min_heap.top().first;
            }

            if (arr[i] >= median) {
                ++notices;
            }
            delete_old_from_heap(max_heap, min_heap, make_pair(arr[i-d],i - d));
            insert_heap(max_heap, min_heap, make_pair(arr[i], i));
            balance_heap(max_heap, min_heap, i - d);
        }
    }

    cout << notices << "\n";

    return 0;

}

