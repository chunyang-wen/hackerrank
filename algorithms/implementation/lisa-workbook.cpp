// https://www.hackerrank.com/challenges/lisa-workbook

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    cin >> n >> k;
    int tmp;
    int next_page = 1;
    int diff_page = 0;
    int result = 0;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        diff_page = (int)ceil(tmp * 1.0 / k);
        /* cur_page to cur_page + (diff_page - 1) */
        int available_page = next_page;
        next_page += diff_page;
        int start = 1;
        while (available_page < next_page) {
            if ((start <= available_page) &&
                    (available_page < start + k) &&
                    (available_page <= tmp)) {
                ++result;
            }
            start += k;
            ++available_page;
        }
    }

    cout << result << "\n";

    return 0;

}

