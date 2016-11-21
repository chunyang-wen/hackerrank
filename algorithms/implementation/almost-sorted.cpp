#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void test(vector<int>& data) {
    int n = data.size();
    /* from left to right */
    int left = 0;
    while (left < n - 1 && data[left] < data[left+1]) ++left;
    if (left == n - 1) {
        cout << "yes\n";
        return;
    }
    /* from right to left */
    int right = n - 1;
    while (right > 0 && data[right] > data[right-1]) --right;
    if (right == 0) {
        cout << "yes\n";
        return;
    }
    if (left == right) {
        cout << "no\n";
        return;
    }
    /* first case: swap left and right */
    {
        bool left_stat = left == 0 || data[left-1] < data[right];
        bool right_stat = right == n-1 || data[right+1] > data[left];
        swap(data[left], data[right]);
        int i = left;
        while (left_stat && right_stat && i < right && data[i] < data[i+1]) ++i;
        if (i == right) {
            cout << "yes\nswap " << left + 1 << " " << right + 1 << "\n";
            return;
        }
        swap(data[left], data[right]);
    }

    /* second case: reverse from left to right */
    {
        bool left_stat = left == 0 || data[left-1] < data[right];
        bool right_stat = right == n-1 || data[right+1] > data[left];
        reverse(&data[left], &data[right+1]);
        int i = left;
        while (left_stat && right_stat && i < right && data[i] < data[i+1]) ++i;
        if (i == right) {
            cout << "yes\nreverse " << left + 1 << " " << right + 1 << "\n";
            return;
        }
    }
    cout << "no\n";
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; ++i) {
        cin >> data[i];

    }
    test(data);
    return 0;

}

