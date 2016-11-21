// https://www.hackerrank.com/challenges/the-time-in-words
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int h;
    cin >> h;
    int m;
    cin >> m;
    string d[31] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
        "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen",
        "ninteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five",
        "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"};
    string minute = "minute";
    string minutes = "minutes";
    string integer = "o' clock";
    if (m == 0) {
        cout << d[h] << " " << integer << "\n";

    } else if (m == 15 || m == 30 || m == 45) {
        if (m == 45) {
            cout << d[60-m] << " to " << d[h+1] << "\n";

        } else {
            cout << d[m] << " past " << d[h] << "\n";

        }

    } else {
        bool past_or_to = true;
        if (m > 30) {
            m = 60 - m;
            past_or_to = false;

        }
        cout << d[m] << " " << ((m > 1) ? minutes : minute) << ((past_or_to) ? " past " : " to ") << (past_or_to ? d[h] : d[h+1]) << "\n";

    }
    return 0;

}

