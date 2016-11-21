// https://www.hackerrank.com/challenges/bigger-is-greater

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int& a, int &b) {
    if (a != b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int games;
    cin >> games;
    int i = 0;
    string str;
    size_t len;
    int back_idx;
    while (i < games) {
        cin >> str;
        len = str.size();
        back_idx = len - 1;
        while (back_idx > 0 && str[back_idx] <= str[back_idx - 1]) {
            --back_idx;
        }
        if (back_idx == 0) {
            cout << "no answer\n";
        } else {
            size_t n = len - 1;
            while (str[n] <= str[back_idx - 1]) {
                --n;
            }
            swap(str[back_idx - 1], str[n]);
            reverse(str.begin() + back_idx, str.end());
            cout << str << "\n";
        }
        ++i;
    }
    return 0;

}

