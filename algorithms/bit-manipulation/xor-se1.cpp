// https://www.hackerrank.com/challenges/xor-se
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


long getResult(long L, long R) {
    /* version 1 */
    long diff = R - L + 1;
    long result = 0;
    if (diff % 2) {
        for (int i = 1; i <= L; ++i) {
            result ^= i;
        }
    }
    diff = diff - 1;
    for (int i = L + 1; i <= R; ++i) {
        if (diff % 2) {
            result ^= i;
        }
        --diff;
    }
    return result;
}

int main(){
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        long L;
        long R;
        cin >> L >> R;

        long result = getResult(L, R);

        cout << result << "\n";

    }
    return 0;

}

