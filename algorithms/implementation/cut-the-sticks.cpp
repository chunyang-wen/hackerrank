#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];

    }
    sort(arr.begin(), arr.end());
    int idx = 0;
    int prev;
    while (idx < n) {
        cout << n - idx << "\n";
        prev = arr[idx];
        while(idx < n && arr[idx] == prev) ++idx;

    }
    return 0;

}

