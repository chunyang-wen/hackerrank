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


int main(){
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    int diffx = x1 - x2;
    int diffv = v2 - v1;
    if (diffv == 0) {
        if (diffx == 0) {
            cout << "YES\n";

        } else {
            cout << "NO\n";

        }

    } else if (diffx % diffv == 0 && diffx / diffv > 0) {
        cout << "YES\n";

    } else {
        cout << "NO\n";

    }
    return 0;

}

