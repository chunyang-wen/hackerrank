// https://www.hackerrank.com/challenges/service-lane
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int t;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
        cin >> width[width_i];

    }
    for(int a0 = 0; a0 < t; a0++){
        int i;
        int j;
        cin >> i >> j;
        int min = 4; /* larger than 3 */
        for (int k = i; k <=j; ++k) {
            if (min == 1) {
                break;
            }
            if (width[k] < min) {
                min = width[k];
            }
        }
        cout << min << "\n";
    }
    return 0;

}

