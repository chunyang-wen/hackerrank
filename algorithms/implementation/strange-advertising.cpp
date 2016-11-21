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
    int result = 0;
    int prev = 5;
    for (int i = 0; i < n; ++i) {
        result += prev / 2;
        prev = prev / 2 * 3;
    }
    cout << result << "\n";
    return 0;

}

