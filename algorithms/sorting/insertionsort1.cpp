// https://www.hackerrank.com/challenges/insertionsort1
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
#include <algorithm>
#include <iterator>
using namespace std;

void insertionSort(vector <int>  ar) {
    int size = ar.size();
    int value_to_insert = ar[size - 1];
    int i = size - 2;
    for (i = size - 2; i >= 0; --i) {
        if (ar[i] <= value_to_insert) {
            break;

        } else {
            ar[i+1] = ar[i];

        }
        copy(ar.begin(), ar.end(), ostream_iterator<int>(cout, " "));
        cout << "\n";

    }
    ar[i+1] = value_to_insert;
    copy(ar.begin(), ar.end(), ostream_iterator<int>(cout, " "));
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

    insertionSort(_ar);
    return 0;

}

