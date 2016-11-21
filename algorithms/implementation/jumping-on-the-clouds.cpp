// https://www.hackerrank.com/challenges/jumping-on-the-clouds
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
        cin >> c[c_i];

    }
    vector<int> d(n, INT_MAX);
    d[0] = 0;
    size_t len = c.size();
    for (size_t idx = 0; idx < len; ++idx) {
        if (c[idx] == 1) {
            continue;
        }
        if ((idx + 1 < len) && (c[idx + 1] == 0)) {
            d[idx + 1] = min(d[idx] + 1, d[idx + 1]);
        }
        if ((idx + 2 < len) && (c[idx + 2] == 0)) {
            d[idx + 2] = min(d[idx] + 1, d[idx + 2]);
        }
    }
    cout << d[len - 1] << "\n";
    return 0;
}

