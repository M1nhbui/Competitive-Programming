#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, x;
    cin >> a >> b;
    if (a=="0") {
        x = b;
    } else {
        x = a + b;
    }
    for (long long i = x.length()-1; i >= 0; i--) {
        cout << x[i];
    }
}