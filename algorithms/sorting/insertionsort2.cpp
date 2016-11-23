// https://www.hackerrank.com/challenges/insertionsort2
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
#include <iterator>
using namespace std;
void insertionSort(int ar_size, int *  ar) {
    for (int i = 1; i < ar_size; ++i) {
        /* inner sort element i */
        int value_to_insert = ar[i];
        int j = i - 1;
        for (; j >= 0; --j) {
            if (ar[j] <= value_to_insert) {
                break;

            } else {
                ar[j+1] = ar[j];

            }

        }
        ar[j + 1] = value_to_insert;
        copy(ar, ar + ar_size, ostream_iterator<int>(cout, " "));
        cout << "\n";

    }

}
int main(void) {

    int _ar_size;
    cin >> _ar_size;
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        cin >> _ar[_ar_i];
    }

    insertionSort(_ar_size, _ar);

    return 0;

}

