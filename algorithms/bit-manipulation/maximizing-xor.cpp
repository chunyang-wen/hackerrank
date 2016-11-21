// https://www.hackerrank.com/challenges/maximizing-xor
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int L = sizeof(l) * 8 - 1;
    while (L >= 0) {
        int a = l & (1 << L);
        int b = r & (1 << L);
        if (a != b) {
            break;
        }
        --L;
    }
    return (1 << (L+1)) - 1;
}

int main() {
    int res;
    int _l;
    cin >> _l;

    int _r;
    cin >> _r;

    res = maxXor(_l, _r);
    cout << res;

    return 0;
}

