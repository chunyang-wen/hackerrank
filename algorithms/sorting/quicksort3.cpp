// https://www.hackerrank.com/challenges/quicksort3
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

void swap(int& a, int& b) {
    if (a == b) return;
    a ^= b;
    b ^= a;
    a ^= b;
}

int partition(vector<int>& arr, int low, int high) {
    int i = low;
    int i1 = i;
    int j = high - 2;
    int pivot = arr[high - 1];
    while (i <= j) {
        if (arr[i] > pivot) {
            ++i;

        } else if (arr[i] < pivot) {
            swap(arr[i1], arr[i]);
            ++i1;
            ++i;

        } else {
            ; /* impossible */

        }

    }
    /* i points to the first number bigger than pivot */
    swap(arr[high-1], arr[i1]);
    return i1;

}

int partition1(vector<int>& arr, int low, int high) {
    int i = low;
    int j = high - 2;
    int pivot = arr[high - 1];
    while (i <= j) {
        if (arr[i] > pivot) {
            while (j > i && arr[j] > pivot) {
                --j;

            }
            if (i == j) {
                break;

            }
            swap(arr[i], arr[j]);
            ++i;

        } else if (arr[i] < pivot) {
            ++i;

        } else {
            ; /* no duplicate */

        }

    }
    /* i points to the first number bigger than pivot */
    swap(arr[high-1], arr[i]);
    return i;

}

void quicksort(vector<int>& arr, int low, int high) {
    if (low >= high - 1) {
        return;

    }
    int p = partition(arr, low, high);
    copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
    cout << "PAR: " << p << "\n";
    cout << "LEFT: " << low << " - " << p << "\n";
    cout << "RIGHT: " << p+1 << " - " << high << "\n";
    quicksort(arr, low, p);
    quicksort(arr, p+1, high);

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];

    }
    quicksort(arr, 0, N);
    return 0;

}

