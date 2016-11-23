// https://www.hackerrank.com/challenges/runningtime
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(vector<int>& arr) {
    int size = arr.size();
    int cnt = 0;
    for (int i = 0; i < size; ++i) {
        int value = arr[i];
        int j = i - 1;
        for (; j >= 0; --j) {
            if (value < arr[j]) {
                arr[j+1] = arr[j];
                ++cnt;
            } else {
                break;
            }
        }
        arr[j+1] = value;
    }
    cout << cnt << "\n";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    insertionSort(arr);
    return 0;

}

