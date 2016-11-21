// https://www.hackerrank.com/challenges/find-digits
#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;

struct Calc {
    Calc(int* result, int n) : _result(result), _n(n) {}
    void operator()(const pair<int, int>& ite) {
        if ((_n % ite.first) == 0) {
            *_result += ite.second;

        }

    }
    int* _result;
    int _n;

};

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        map<int, int> digits;
        int tmp = n;
        while (tmp > 0) {
            if ((tmp % 10) == 0) {
                tmp /= 10;
                continue;

            }
            ++digits[tmp%10];
            tmp /= 10;

        }
        int result = 0;
        for_each(digits.begin(), digits.end(), Calc(&result, n));
        cout << result << "\n";

    }
    return 0;

}

