// https://www.hackerrank.com/challenges/strange-code

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
    long long t;
    cin >> t;
    long long initial = 3;
    long long sum = 0;
    while (sum < t) {
        sum += initial;
        initial <<= 1;
    }

    initial >>= 1;
    sum -= initial;

    cout << initial - (t - sum) + 1 << "\n";
    return 0;

}

