// https://www.hackerrank.com/challenges/closest-numbers
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<pair<int, int> > result;
    int cur_min = INT_MAX;
    for (int i = 0; i < N - 1; ++i) {
        if (arr[i+1] - arr[i] < cur_min) {
            result.clear();
            result.push_back(pair<int, int>(arr[i], arr[i+1]));
            cur_min = arr[i+1] - arr[i];
        } else if (arr[i+1] - arr[i] == cur_min) {
            result.push_back(pair<int, int>(arr[i], arr[i+1]));
        }
    }
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i].first << " " << result[i].second << " ";
    }
    cout << "\n";
    return 0;

}

