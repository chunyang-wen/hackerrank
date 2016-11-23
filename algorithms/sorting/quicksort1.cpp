// https://www.hackerrank.com/challenges/quicksort1
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
void partition(vector <int>  ar) {
    /* Enter code for partitioning and printing here. */
    int pivot = ar[0];
    int size = ar.size();
    vector<int> left;
    vector<int> right;
    for (int j = 1; j < size; ++j) {
        if (ar[j] >= pivot) {
            right.push_back(ar[j]);
        } else {
            left.push_back(ar[j]);
        }
    }
    copy(left.begin(), left.end(), ostream_iterator<int>(cout, " "));
    cout << pivot << " ";
    copy(right.begin(), right.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
}

int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;

    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

    partition(_ar);

    return 0;

}

