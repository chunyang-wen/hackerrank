// https://www.hackerrank.com/challenges/minimum-distances
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

struct Comp {
    bool operator()(const pair<int, int>& lhs, const pair<int, int>& rhs) {
        if (lhs.first == rhs.first) {
            return lhs.second < rhs.second;

        }
        return lhs.first < rhs.first;

    }

};

int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > A(n);
    for(int i = 0;i < n;i++){
        cin >> (A[i].first);
        A[i].second = i;

    }
    sort(A.begin(), A.end(), Comp());
    int i = 0;
    int min_dist = INT_MAX;
    int prev;
    while (i < n) {
        prev = A[i].first;
        if (i < n - 1 && A[i].first == A[i+1].first) {
            min_dist = min(min_dist, A[i+1].second - A[i].second);

        }        
        while(i < n && A[i].first == prev) ++i;

    }
    cout << (min_dist == INT_MAX ? -1:min_dist) << "\n";
    return 0;

}

