// https://www.hackerrank.com/challenges/flipping-bits
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
        long n;
        cin >> n;
        cout << (n ^ 0xFFFFFFFFl) << "\n";
    }
    return 0;

}

