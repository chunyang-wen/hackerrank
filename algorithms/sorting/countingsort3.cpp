// https://www.hackerrank.com/challenges/countingsort3
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    const int BOUND = 100;
    int N;
    cin >> N;
    int tmp;
    string str;
    vector<int> arr(BOUND, 0);
    for (int i = 0; i < N; ++i) {
        cin >> tmp >> str;
        ++arr[tmp];
    }
    int start = 0;
    for (int i = 0; i < BOUND; ++i) {
        start += arr[i];
        cout << start << " ";
    }
    cout << "\n";
    return 0;
}

