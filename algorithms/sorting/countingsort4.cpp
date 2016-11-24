// https://www.hackerrank.com/challenges/countingsort4
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;

    int tmp;
    string str;
    vector<int> arr(N, 0);
    vector<vector<string> > strs(N, vector<string>());
    for (int i = 0; i < N; ++i) {
        cin >> tmp >> str;
        ++arr[tmp];
        if (i >= N / 2) {
            strs[tmp].push_back(str);
        } else {
            strs[tmp].push_back("-");
        }
    }

    for (int i = 0; i < N; ++i) {
        if (arr[i] <= 0) {
            continue;
        }
        int idx = 0;
        while (arr[i] > 0) {
            cout << strs[i][idx] << " ";
            ++idx;
            --arr[i];
        }
    }
    cout << "\n";
    return 0;
}

