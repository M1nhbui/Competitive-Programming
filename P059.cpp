#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    int b = 1;
    int a = floor (sqrt(n));
    for (int i = a; i >= 1; i--) {
        if (n % i == 0) {
            b=i;
            break;
        }
    } cout << b << " " << n/b;
    return 0;
}