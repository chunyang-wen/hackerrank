// https://www.hackerrank.com/challenges/absolute-permutation
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> b(n+1, 0);

        int flag=0;
        if (k == 0) {
            for (int i = 1; i < n ; i++) cout << i << " ";
            cout << n << "\n";
            continue;
        }
        for (int i = 1; i <= n; i++) {
            if ((i + k) <= n &&b[i] == 0) {
                b[i] = i + k;
                b[i+k] = i;

            } else {
                if (b[i] == 0) {
                    flag=1;
                    break;

                }

            }

        }
        if (flag == 1) {
            cout<<"-1"<<"\n";

        } else {
            for (int i = 1;i < n;i++) cout << b[i] << " ";
            cout << b[n] << "\n";

        }

    }
    return 0;
}
