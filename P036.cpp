#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b, c, d, mod;
	cin >> a >> b >> c >> d >> mod;
	cout << (a + b) * (c + d) % mod;
}