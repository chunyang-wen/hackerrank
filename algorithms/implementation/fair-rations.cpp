// https://www.hackerrank.com/challenges/fair-rations
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
    int N;
    cin >> N;
    vector<int> B(N);
    for(int B_i = 0;B_i < N;B_i++){
        cin >> B[B_i];

    }
    int breads_need = 0;
    bool is_impossible = false;
    for (int i = 0; i < N; ++i) {
        /* find next odd number of bread */
        while (i < N && ((B[i] & 0x1) == 0)) ++i;
        /* cout << "CUR I: " << i << "\n"; */
        if (i >= N) {
            break;

        } else if (i == N - 1) {
            is_impossible = true;
            break;

        } else {
            breads_need += 2;
            B[i+1] += 1;
            B[i] += 1;

        }

    }
    if (is_impossible) {
        cout << "NO\n";

    } else {
        cout << breads_need << "\n";

    }
    return 0;

}

