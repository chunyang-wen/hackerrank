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
#include <unordered_map>

using namespace std;

struct CountHelper {
    CountHelper(int s, int t, int a, int* cnt): _s(s), _t(t), _a(a), _cnt(cnt) {}
    void operator()(int d) {
        int loc = _a + d;
        if (loc <= _t && loc >= _s) {
            ++*_cnt;
        }
    }
    int _s;
    int _t;
    int _a;
    int* _cnt;

};

int main(){
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;

    int apple_count = 0;
    int orange_count = 0;

    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
        cin >> apple[apple_i];

    }
    for_each(apple.begin(), apple.end(), CountHelper(s, t, a, &apple_count));
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
        cin >> orange[orange_i];

    }
    for_each(orange.begin(), orange.end(), CountHelper(s, t, b, &orange_count));
    cout << apple_count << "\n" << orange_count << "\n";
    return 0;

}

