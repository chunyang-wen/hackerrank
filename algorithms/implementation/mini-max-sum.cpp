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
    long long a[5];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    sort(a, a + 5);
    cout << accumulate(a, a + 4, 0ll) <<" " << accumulate(a+1, a+5, 0ll) << "\n";
    return 0;
}

