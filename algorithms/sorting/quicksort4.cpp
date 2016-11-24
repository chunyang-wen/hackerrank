// https://www.hackerrank.com/challenges/quicksort4
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* use pass by value intentionally */

int insertionSortShifts(vector<int> arr) {
    int size = arr.size();
    int count = 0;
    for (int i = 1; i < size; ++i) {
        int j = i - 1;
        int value = arr[i];
        while (j >= 0 && arr[j] > value) {
            arr[j+1] = arr[j];
            ++count;
            --j;
        }
        arr[j+1] = value;
    }
    return count;
}

void swap(int& a, int& b) {
    if (a == b) return;
    a ^= b;
    b ^= a;
    a ^= b;
}

int partition(vector<int>& arr, int low, int high, int& swaps) {
    if (low >= high - 1) {
        return low;
    }
    int pivot = arr[high-1];
    int i = low;
    int i1 = i;
    int j = high - 2;
    while (i <= j) {
        if (arr[i] >= pivot) {
            ++i;
        } else if (arr[i] < pivot) {
            ++swaps;
            swap(arr[i], arr[i1]);
            ++i;
            ++i1;
        } else {
            ;
        }
    }
    swap(arr[high-1], arr[i1]);
    ++swaps;
    return i1;
}

int quickSortSwaps(vector<int>& arr, int low, int high) {
    if (low >= high - 1) {
        return 0;
    }
    int swaps = 0;
    int p = partition(arr, low, high, swaps);
    return quickSortSwaps(arr, low, p) + quickSortSwaps(arr, p+1, high) + swaps;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0 ; i < N; ++i) {
        cin >> arr[i];
    }
    int a = insertionSortShifts(arr);
    int b = quickSortSwaps(arr, 0, arr.size());
    cout << a - b << "\n";
    return 0;

}

