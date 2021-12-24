#include <bits/stdc++.h>
using namespace std;
// power set - all subsequences
// a, ab, abc, b, bc, c, abc

// str = abc
// ind = 012

// i - 210
// -------
// 0 - 000 - ""
// 1 - 001 - a
// 2 - 010 - b
// 3 - 011 - ab
// 4 - 100 - c
// 5 - 101 - ac
// 6 - 110 - bc
// 7 - 111 - abc

int main() {
    string str = "abc";
    int n = str.size();
    string bit;
    for(int i = 0 ; i < (1 << n) ; i++) {
        bit = "";
        for(int j = 0 ; j < n ; j++) {
            if(i & (1 << j)) // if bit is on
                bit += str[j];
        }
        cout << bit << endl;
    }    

    return 0;
}
