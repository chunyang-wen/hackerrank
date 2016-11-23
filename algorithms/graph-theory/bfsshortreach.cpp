// https://www.hackerrank.com/challenges/bfsshortreach/
#include <cmath>
#include <cstdio>
#include <deque>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector<int>::iterator Iter;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    while (q--) {
        int n, m;
        cin >> n >> m;
        map<int, vector<int> > edges;
        for (int i = 0; i < m; ++i) {
            int u, v;
            cin >> u >> v;
            edges[u].push_back(v);
            edges[v].push_back(u);

        }
        int start;
        cin >> start;
        deque<int> nodes;
        nodes.push_back(start);
        map<int, bool> visited;
        map<int, int> distances;
        distances[start] = 0;
        while (!nodes.empty()) {
            int node = nodes.front();
            nodes.pop_front();

            visited[node] = true;
            Iter ite_beg = edges[node].begin();
            Iter ite_end = edges[node].end();
            while (ite_beg != ite_end) {
                if(visited.find(*ite_beg) == visited.end()) {
                    nodes.push_back(*ite_beg);
                    distances[*ite_beg] = distances[node] + 6;
                    visited[*ite_beg] = true;

                }
                ++ite_beg;

            }

        }
        for (int i = 1; i <= n; ++i) {
            if (i == start) {
                continue;

            }
            if (distances.find(i) == distances.end()) {
                cout << "-1" << " ";

            } else {
                cout << distances[i] << " ";

            }

        }
        cout << "\n";

    }
    return 0;

}

