// https://www.hackerrank.com/challenges/kaprekar-numbers
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int p, q;
    cin >> p >> q;
    long long cnt = 0;
    for (;p <= q; ++p) {
        long long digits = 1;
        /* tricky point, overflow may happen here */
        long long num = 1ll * p * p;
        int tmp = p;
        while (tmp > 0) {
            digits *= 10;
            tmp /= 10;
        }

        long long right = num % digits;
        long long left  = num / digits;
        if ((left + right) == p) {
            ++cnt;
            cout << p << " ";
        }
    }
    if (0 == cnt) {
        cout << "INVALID RANGE\n";
    }
    return 0;

}

