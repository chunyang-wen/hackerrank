// https://www.hackerrank.com/challenges/equality-in-a-array
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> d(101, 0);
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        ++d[tmp];
    }
    sort(d.begin(), d.end());
    int sum = 0;
    for (int i = 0; i < 100; ++i) {
        sum += d[i];
    }
    cout << sum << "\n";
    return 0;

}

