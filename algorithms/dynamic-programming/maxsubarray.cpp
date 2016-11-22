// https://www.hackerrank.com/challenges/maxsubarray
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> a(N);
        for (int i = 0; i < N; ++i) {
            cin >> a[i];

        }
        int c_sum = 0;
        int nc_result = 0;
        int c_result = INT_MIN;
        for (int i = 0; i < N; ++i) {
            c_sum += a[i];
            if (c_sum < 0) {
                c_sum = 0;
                if (a[i] > c_result) {
                    c_result = a[i];

                }
                continue;

            }
            if (c_sum > c_result) {
                c_result = c_sum;

            }
            if (a[i] > 0) {
                nc_result += a[i];

            }

        }

        if (c_result < 0) {
            nc_result = c_result;

        }
        cout << c_result << " " << nc_result << "\n";

    }
    return 0;

}

