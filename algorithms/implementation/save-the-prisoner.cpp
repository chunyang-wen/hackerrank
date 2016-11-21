// https://www.hackerrank.com/challenges/save-the-prisoner

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    int t = 0;
    int N, M, S;
    while (t < T) {
        cin >> N >> M >> S;
        cout << ((S + M - 1 - 1) % N + 1) << "\n";
        ++t;
    }
    return 0;

}

