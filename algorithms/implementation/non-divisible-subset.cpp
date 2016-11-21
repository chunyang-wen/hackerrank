// https://www.hackerrank.com/challenges/non-divisible-subset
// Reference: http://stackoverflow.com/questions/37443282/non-divisible-subset-in-python
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin >> n >> k;
    map<int, int> m;
    int tmp;
    for (int arr_i = 0; arr_i < n; ++arr_i) {
        cin >> tmp;
        ++m[tmp % k];

    }

    int max_size = 0;
    for (int i = 0; i < k/2+1; ++i) {
        if (0 == i || i * 2 == k) {
            max_size += (m[i] > 0);

        } else {
            max_size += max(m[i], m[k-i]);

        }

    }

    cout << max_size << "\n";
    return 0;

}

