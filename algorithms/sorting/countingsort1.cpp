// https://www.hackerrank.com/challenges/countingsort1
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    vector<int> arr(100, 0);
    for (int i = 0; i < N; ++i) {
        int tmp;
        cin >> tmp;
        ++arr[tmp];
    }
    copy(arr.begin(), arr.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
    return 0;
}

