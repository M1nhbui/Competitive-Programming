#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long double a = sqrt(n);
    if (a  == round(a)) {
        cout << 1;
    } else {
        cout << 0;
    }
}