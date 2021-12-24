// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    // if(!a)
    //     return b;
    // if(!b)
    //     return a;
    // if(a < b) 
    //     return gcd(a, b - a);
    // return gcd(b - a, a);
    if(b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    cout << gcd(15, 27);
}
