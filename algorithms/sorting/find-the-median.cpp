// https://www.hackerrank.com/challenges/find-the-median
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int& a, int& b) {
    if (a == b) return;
    a ^= b;
    b ^= a;
    a ^= b;
}

int median(vector<int>& a, int low, int high, int target) {
    if (low >= high - 1) {
        return a[low];
    }
    int pivot = a[high - 1];
    int i = low;
    int i1 = i;
    int j = high - 2;
    while (i <= j) {
        if (a[i] < pivot) {
            swap(a[i], a[i1]);
            ++i;
            ++i1;

        } else if (a[i] >= pivot) {
            ++i;

        }

    }
    swap(a[high-1], a[i1]);
    if (i1 == target) {
        /* found */
        return pivot;

    } else if (i1  > target) {
        /* search in left */
        return median(a, low, i1, target);

    } else {
        /* search in right: update target */
        return median(a, i1+1, high, target);

    }


}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];

    }
    cout << median(arr, 0, N, N/2) << "\n";
    return 0;

}

