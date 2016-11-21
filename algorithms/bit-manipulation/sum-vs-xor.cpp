// https://www.hackerrank.com/challenges/sum-vs-xor
#include <iostream>

using namespace std;


int main(){
    long n;
    cin >> n;
    int total_bits = 0;
    long tmp = n;
    while (tmp != 0) {
        ++total_bits;
        tmp >>= 1;

    }
    int cnt = 0;
    tmp = n;
    while (tmp != 0) {
        ++cnt;
        tmp &= (tmp-1);

    }
    cout << (1ll << (total_bits - cnt)) << "\n";
    return 0;

}

