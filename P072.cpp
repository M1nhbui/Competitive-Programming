#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    for (long long i = n; i<1000000000; i++) {
        long long a = round(sqrt(i));
        if (i==a*a) {
            cout << i;
            return 0;
        }
    }
}