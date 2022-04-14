#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b, x, m, n;
	cin >> a >> b;
	x = abs(__gcd(a, b));
	m = a / x;
	n = b / x;
	if (n < 0) {
		m = m*(-1);
		n = n*(-1);
		cout << m << " " << n;
	} else {
		cout << m << " " << n;
	}

	return 0;
}