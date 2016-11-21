// https://www.hackerrank.com/challenges/bon-appetit
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int idx = 0; idx < n; ++idx) {
        cin >> a[idx];
    }
    int money;
    cin >> money;
    int total = accumulate(a.begin(), a.end(), 0);
    int actual_money = (total - a[k]) >> 1;
    if (money == actual_money) {
        cout << "Bon Appetit\n";
    } else {
        cout << (money - actual_money) << "\n";
    }
    return 0;
}

