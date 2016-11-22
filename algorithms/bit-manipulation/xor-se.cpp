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

long getAn(long n) {

    if ((n % 4) == 1) {
        return 1;
    } else if ((n % 4) == 3) {
        return 0;
    } else if ((n % 4) == 2) {
        return 3l + (n / 4) * 4;
    } else {
        return 4l * (n / 4);
    }
}

long getFn(long n) {

    long number_of_zeros = (n+1) / 4;
    long number_of_ones  = (n+3) / 4;
    long four_pairs = (n - number_of_zeros - number_of_ones + 1);
    long remain =  four_pairs % 4;
    bool is_even = remain & 0x1 ? true : false;
    long result = number_of_ones & 0x1 ? 1 : 0;
    while (n > 0 && remain > 0) {
        if ((n + (!is_even) * 2) % 4 == 0) {
            --remain;
            result ^= getAn(n);
            is_even = !is_even;
        }
        --n;
    }
    return result;
}

long getResultCache(long L, long R) {
    /* cout << "getFn(R): " << getFn(R) << "\n"; */
    /* cout << "getFn(L-1): " << getFn(L-1) << "\n"; */
    return getFn(R) ^ getFn(L - 1);
}

int main(){

    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        long L;
        long R;
        cin >> L >> R;
        long result = getResultCache(L, R);
        cout << result << "\n";
    }
    return 0;

}

