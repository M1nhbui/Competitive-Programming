#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long a = floor(n/3600);
    long long m = n - a*3600;
    long long b = floor(m/60);
    long long c = m - b*60;
    if (a<10 && b>=10 && c>=10) {
        cout << "0" << a << ":" << b << ":" << c;
    } if (a<10 && b<10 && c>=10) {
        cout << "0" << a << ":" << "0" << b << ":" << c;
    } if (a<10 && b<10 && c<10) {
        cout << "0" << a << ":" << "0" << b << ":" << "0" << c;
    } if (a<10 && b>=10 && c<10) {
        cout << "0" << a << ":" << b << ":" << "0" << c;
    } if (a>=10 && b>=10 && c>=10) {
        cout << a << ":" << b << ":" << c;
    } if (a>=10 && b<10 && c>=10) {
        cout << a << ":" << "0" << b << ":" << c;
    } if (a>=10 && b<10 && c<10) {
        cout << a << ":" << "0" << b << ":" << "0" << c;
    } if (a>=10 && b>=10 && c<10) {
        cout << a << ":" << b << ":" << "0" << c;
    }
    return 0;
}