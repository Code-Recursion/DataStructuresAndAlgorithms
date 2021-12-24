#include <bits/stdc++.h>
using namespace std;

void sieveOfEratosthene() {
    int n = 20;
    bool isPrime[n + 1];
    memset(isPrime, true, sizeof(isPrime));
    isPrime[0] = isPrime[1] = false;
    for(int i = 2 ; i * i <= n ; i++) {
        for(int j = 2 * i ; j <= n ; j += 2) {
            isPrime[j] = false;
        }
    }
    
     for(int i = 0 ; i <= 20 ; i++)
        isPrime[i] ? cout << i << " : True" << endl : cout << i << " : False" << endl;
}

int main() {
    sieveOfEratosthene();
}

// output
// 0 : False
// 1 : False
// 2 : True
// 3 : True
// 4 : False
// 5 : True
// 6 : False
// 7 : True
// 8 : False
// 9 : True
// 10 : False
// 11 : True
// 12 : False
// 13 : True
// 14 : False
// 15 : True
// 16 : False
// 17 : True
// 18 : False
// 19 : True
// 20 : False
