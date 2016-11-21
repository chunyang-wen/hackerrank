// https://www.hackerrank.com/challenges/angry-professor
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct OnTime {
    bool operator()(const int a) {
        return a <= 0;
    }

};
int main(){
    int t;
    cin >> t;
    int result;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
            cin >> a[a_i];

        }
        result = count_if(a.begin(), a.end(), OnTime());
        if (result >= k) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;

}

