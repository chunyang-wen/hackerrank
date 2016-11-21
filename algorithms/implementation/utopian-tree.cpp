// https://www.hackerrank.com/challenges/utopian-tree
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int height = 1;
        for (int j = 0; j < n; ++j) {
            if (j & 0x1) {
                height += 1;

            } else {
                height *= 2;

            }

        }
        cout << height << "\n";

    }
    return 0;

}

