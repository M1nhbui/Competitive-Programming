#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a + 3);
	long long x = a[0], y = a[1], z = a[2];
	if (z * z == x * x + y * y) {
		cout << 0;
	} else if (z * z > x * x + y * y) {
		cout << 2;
	} else {
		cout << 1;
	}
}