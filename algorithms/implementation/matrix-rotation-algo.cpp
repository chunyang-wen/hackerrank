// https://www.hackerrank.com/challenges/matrix-rotation-algo
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector<vector<int> > Matrix;
void print_matrix(const Matrix& matrix) {
    size_t M = matrix.size();
    if (matrix.empty()) {
        return;
    }
    size_t N = matrix[0].size();
    for (size_t i = 0; i < M; ++i) {
        for (size_t j = 0; j < N - 1; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << matrix[i][N - 1] << "\n";
    }

}

void rotate_matrix(Matrix& matrix, int start, int M, int N, int R) {

    vector<int> v;
    while (true) {
        int i = start;
        int j = start;
        while (j < N) {
            v.push_back(matrix[i][j]);
            ++j;
        }
        --j;

        ++i;
        while (i < M) {
            v.push_back(matrix[i][j]);
            ++i;
        }
        --i;

        --j;
        while (j >= start) {
            v.push_back(matrix[i][j]);
            --j;
        }
        ++j;

        --i;
        while (i > start) {
            v.push_back(matrix[i][j]);
            --i;
        }

        break;
    }

    if (v.empty()) {
        return;
    }

    int shift_len = R % (int)(v.size());
    reverse(v.begin(), v.begin() + shift_len);
    reverse(v.begin() + shift_len, v.end());
    reverse(v.begin(), v.end());
    while (true) {
        int i = start;
        int j = start;
        int cnt = 0;

        while (j < N) {
            matrix[i][j] = v[cnt];
            ++cnt;
            ++j;

        }
        --j;

        ++i;
        while (i < M) {
            matrix[i][j] = v[cnt];
            ++cnt;
            ++i;

        }
        --i;

        --j;
        while (j >= start) {
            matrix[i][j] = v[cnt];
            ++cnt;
            --j;

        }
        ++j;

        --i;
        while (i > start) {
            matrix[i][j] = v[cnt];
            ++cnt;
            --i;

        }
        break;

    }


}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int M, N, R;
    cin >> M >> N >> R;
    Matrix matrix(M, vector<int>(N));
    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];

        }

    }

    int start = 0;
    while (true) {

        /* from (start, start) --> (start + M - 1, start + N - 1) */
        rotate_matrix(matrix, start, M, N, R);
        ++start;
        --M;
        --N;
        if ( M <= 0 || N <= 0 || start >= M || start >= N ) {
            break;

        }
    }
    print_matrix(matrix);
    return 0;

}

