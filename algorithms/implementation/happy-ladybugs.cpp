// https://www.hackerrank.com/challenges/happy-ladybugs

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
    int Q;
    cin >> Q;
    char m[26];
    for(int a0 = 0; a0 < Q; a0++){
        int n;
        cin >> n;
        string b;
        cin >> b;
        bool has_unhappy = false;
        bool has_empty   = false;
        size_t len = b.size();
        memset(m, 0, sizeof(m));
        for (size_t i = 0; i < len; ++i) {
            if (b[i] == '_') {
                has_empty = true;
                continue;
            }
            ++m[b[i] - 'A'];
        }
        for (size_t i = 0; i < sizeof(m); ++i) {
            if (m[i] == 1) {
                has_unhappy = true;
                break;
            }

        }
        if (has_unhappy) {
            cout << "NO\n";
        } else if (has_empty) {
            cout << "YES\n";
        } else {
            // check whether all bugs are adjacent
            int cnt = 0;
            char c;
            bool is_yes = true;
            for (size_t i = 0; i < len;) {
                cnt = 0;
                c = b[i];
                while (i < len && b[i] == c) {
                    ++cnt;
                    ++i;

                }
                if (cnt == 1) {
                    is_yes = false;
                    break;
                }
            }
            if (is_yes) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}

