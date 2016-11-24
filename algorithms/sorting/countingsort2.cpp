// https://www.hackerrank.com/challenges/countingsort2
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> arr(100, 0);
    int tmp;
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        ++arr[tmp];
    }
    for (int i = 0; i < 100; ++i) {
        if (0 == arr[i]) {
            continue;
        }
        while (arr[i] > 0) {
            cout << i << " ";
            --arr[i];
        }
    }
    cout << "\n";
    return 0;
}

