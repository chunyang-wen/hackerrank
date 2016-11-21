// https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited

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
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
        cin >> c[c_i];
    }
    int E = 100;
    for (int c_i = k; c_i <= n; c_i += k) {
        if (c[c_i % n] == 0) {
            E -= 1;
        } else {
            E -= 3;
        }
    }
    cout << E << "\n";
    return 0;

}

