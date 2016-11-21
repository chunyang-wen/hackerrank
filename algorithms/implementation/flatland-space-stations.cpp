// https://www.hackerrank.com/challenges/flatland-space-stations

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
    int m;
    cin >> n >> m;
    vector<int> c(n, 0);
    int tmp;
    for(int c_i = 0;c_i < m;c_i++){
        cin >> tmp;
        c[tmp] = 1;

    }
    vector<int> d(n, n - 1);
    /* traverse from left from right */
    int space = -1;
    for (int i = 0; i < n; ++i) {
        if (c[i] > 0) {
            /* found a space */
            space = i;

        }
        if (space >= 0) {
            d[i] = min(d[i], i - space);

        }

    }
    space = -1;
    /* traverse from right to left */
    for (int i = n - 1; i >= 0; --i) {
        if (c[i] > 0) {
            /* found a space */
            space = i;
        }
        if (space >= 0) {
            d[i] = min(d[i], space - i);
        }
    }
    cout << *max_element(d.begin(), d.end()) << "\n";
    return 0;
}

