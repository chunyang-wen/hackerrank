// https://www.hackerrank.com/challenges/cipher
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;
    int size = N;
    string result;
    int data = 0;
    for (int i = 0; i < size; ++i) {

        if (i < K) {
            result += ((data ^ (s[i] - '0')) + '0');
            data ^= (result[result.size() - 1] - '0');

        } else {
            data ^= (result[result.size() - K] - '0');
            result += ((data ^ (s[i] - '0')) + '0');
            data ^= (result[result.size() - 1] - '0');

        }
    }
    cout << result << "\n";
    return 0;

}

