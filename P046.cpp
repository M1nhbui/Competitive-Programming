#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y, a, b, c, d;
	long long z = 1;
	cin >> a >> b >> c >> d;
	x = a + b; y = c + d;
	for (long long i = 1; i <= y; i++) {
		z = z * x;
	} cout << z;
}