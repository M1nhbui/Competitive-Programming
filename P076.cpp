#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    int m = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        int b = round(sqrt(a));
        if (a == b*b) {
            m+=1;
        }
    } cout << m;
}