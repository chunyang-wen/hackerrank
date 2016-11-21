// https://www.hackerrank.com/challenges/and-product
nclude <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long common(long a, long b) {
    int L = sizeof(a) * 8;
    /* place where first diff happens */
    int f_d = L - 1;
    while (f_d > 0 && ((a&(1l<<f_d)) == (b&(1l<<f_d)))) {
        /* cout << "a: " << (a&(1<<f_d)) << "\n"; */
        /* cout << "b: " << (b&(1<<f_d)) << "\n"; */
        --f_d;

    }
    return a & ~((1l << f_d ) - 1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while (t--) {
        long a, b;
        cin >> a >> b;
        cout << common(a, b) << "\n";
    }
    return 0;

}

