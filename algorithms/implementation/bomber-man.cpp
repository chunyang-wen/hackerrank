#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector<vector<char> > BombType;
void print_matrix(const BombType& m) {
    int R = m.size();
    if (m.empty()) {
        return;

    }
    int C = m[0].size();
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cout << m[i][j];

        }
        cout << "\n";

    }

}

void explode_matrix(BombType& m, const BombType& bomb) {
    int R = m.size();
    if (m.empty()) {
        return;

    }
    int C = m[0].size();
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (bomb[i][j] == 'O') {
                /* explode in four direction */
                m[i][j] = '.';
                if (i > 0) m[i - 1][j] = '.';
                if (i < R - 1) m[i + 1][j] = '.';
                if (j > 0) m[i][j-1] = '.';
                if (j < C - 1) m[i][j+1] = '.';

            }

        }

    }

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int R, C, N;
    cin >> R >> C >> N;
    BombType matrix(R, vector<char>(C));
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> matrix[i][j];

        }

    }

    if (N == 1) {
        print_matrix(matrix);

    } else if (N == 2) {
        print_matrix(BombType(R, vector<char>(C, 'O')));

    } else if (N == 3) {
        BombType blode_matrix(R, vector<char>(C, 'O'));
        explode_matrix(blode_matrix, matrix);
        print_matrix(blode_matrix);

    } else if ((N & 0x1) == 0) {
        print_matrix(BombType(R, vector<char>(C, 'O')));

    } else if ((N + 1) % 4 == 0) {
        BombType blode_matrix(R, vector<char>(C, 'O'));
        explode_matrix(blode_matrix, matrix);
        print_matrix(blode_matrix);

    } else if ((N-1) % 4 == 0) {
        BombType blode_matrix(R, vector<char>(C, 'O'));
        explode_matrix(blode_matrix, matrix);
        BombType blode_matrix1(R, vector<char>(C, 'O'));
        explode_matrix(blode_matrix1, blode_matrix);
        print_matrix(blode_matrix1);  

    }

    return 0;

}

