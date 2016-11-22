// https://www.hackerrank.com/challenges/tutorial-intro
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    /* binary search */
    int target;
    cin >> target;
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int low = 0;
    int high = N;
    while (low < high) {
        int mid = (high - low) / 2 + low;
        if (arr[mid] == target) {
            cout << mid << "\n";
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return 0;

}

