// https://www.hackerrank.com/challenges/counter-game
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int game_time(unsigned long long N) {
    /* zeros after first 1 */
    int low = 0;

    while ((N & (1ull << low)) == 0) {
        ++low;
    }

    unsigned long long tmp = N & ~(1ull << low);
    /* cout << "TMP: " << tmp << " N: " << N << "\n";*/
    int cnt = 0;
    while (tmp != 0) {
        ++cnt;
        tmp &= (tmp - 1);
    }
    /* cout << "LOW: " << low << " CNT: " << cnt << "\n";*/
    return low + cnt;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    string users[] = {"Louise", "Richard"};
    while (t--) {
        unsigned long long N;
        cin >> N;
        int times  = game_time(N);
        cout << users[(1 + times) % 2] << "\n";
    }
    return 0;

}

