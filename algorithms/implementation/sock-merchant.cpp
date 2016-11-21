// https://www.hackerrank.com/challenges/sock-merchant
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
    map<int, int> m;
    int tmp;
    for(int c_i = 0;c_i < n;c_i++){
        cin >> tmp;
        ++m[tmp];

    }
    int count = 0;
    auto ibeg = m.begin();
    auto iend = m.end();
    while (ibeg != iend) {
        count += ibeg->second / 2;
        ++ibeg;

    }
    cout << count << "\n";
    return 0;

}

