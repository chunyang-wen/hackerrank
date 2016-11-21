// https://www.hackerrank.com/challenges/encryption
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    int len = s.size();
    double root = sqrt(len);
    int row = (int)floor(root);
    int col = (int)ceil(root);
    if (row * col < len) {
        ++row;

    }
    /* cout << "ROW: " << row << " COL: " << col << "\n"; */
    string result = "";
    for (int j = 0; j < col; ++j) {
        for (int i = 0; i < row; ++i) {
            if (i * col + j >= len) {
                break;
            }
            result += s[i * col + j];
        }
        result += " ";
    }
    if (!result.empty()) {
        result[result.size() - 1] = '\n';
    }

    cout << result;
    return 0;

}

