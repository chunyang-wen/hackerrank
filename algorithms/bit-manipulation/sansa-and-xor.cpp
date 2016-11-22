// https://www.hackerrank.com/challenges/sansa-and-xor
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<unsigned int> d(N);
        for (int i = 0; i < N; ++i) {
            cin >> d[i];
        }

        unsigned int result = 0;
        for (int i = 0; i < N; ++i) {
            long long n = i;
            long long m = N - i - 1;
            long long count = 1 + n + m + n * m;
            if (count % 2) {
                result ^= d[i];
            }
        }
        cout << result << "\n";
    }
    return 0;
}

