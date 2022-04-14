#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, m;
    cin >> n;
    m = 0;
    for (long long i = 1;i <= n;i++) {
        if (n % i == 0) {
            m+=i;
        }  
    } cout << m;
}