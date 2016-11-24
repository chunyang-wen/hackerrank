#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/* binary indexed tree */

void update(vector<int>&arr, int pos, int value) {
    int len = arr.size();
    for(; pos < len; pos += (pos&-pos)) {
        arr[pos] += value;
    }
}

int prefix_sum(vector<int>& arr, int pos) {
    int len = arr.size();
    int result = 0;
    for (; pos > 0; pos -= (pos & -pos)) {
        result += arr[pos];
    }
    return result;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    const int LEN = 10000000 + 1;

    while (t--) {
        int N;
        cin >> N;
        long long result = 0;
        vector<int> bit(LEN, 0);
        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }
        update(bit, arr[0], 1);
        for (int i = 1; i < N; ++i) {
            result += (prefix_sum(bit, LEN-1) - prefix_sum(bit, arr[i]));
            update(bit, arr[i], 1);
        }
        cout << result << "\n";
    }
    return 0;
}

