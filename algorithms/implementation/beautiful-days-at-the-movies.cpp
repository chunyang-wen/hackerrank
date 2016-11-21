#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int& a, int& b) {
    if (a != b) {
        a ^= b;
        b ^= a;
        a ^= b;

    }

}

bool is_beautiful(int x, int k) {
    int y = 0;
    int z = x;
    while (z > 0) {
        y *= 10;
        y += z % 10;
        z /= 10;

    }
    if (x == y) {
        return true;
    }

    if (x < y) {
        swap(x, y);
    }
    if (0 == (x - y) % k) {
        return true;
    }
    return false;
}

int main() {
    /* Enter your code here.
       Read input from STDIN.
       Print output to STDOUT */
    int i, j, k;
    cin >> i >> j >>
        k;
    int count =
        0;
    for (int
            idx = i;
            idx <= j;
            ++idx) {
        if
            (is_beautiful(idx, k)) {
                ++count;
            }
    }
    cout
        <<
        count
        <<
        "\n";
    return
        0;
}
