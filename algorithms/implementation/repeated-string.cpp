// https://www.hackerrank.com/challenges/repeated-string

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
    string s;
    cin >> s;
    long n;
    cin >> n;

    long number_of_a_in_s = 0;
    const char target = 'a';
    size_t len = s.size();
    size_t idx = 0;
    while (idx < len) {
        if (s[idx] == target) {
            ++number_of_a_in_s;
        }
        ++idx;
    }
    long times = n / len;
    long remainder = n % len;
    long result = 0;
    result = times * number_of_a_in_s;
    idx = 0;
    while (idx < remainder) {
        if (s[idx] == target) {
            ++result;
        }
        ++idx;
    }
    cout << result << "\n";
    return 0;
}

