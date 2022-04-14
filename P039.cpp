#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y;
	long long z = 1;
	cin >> x >> y;
	for (long long i = 1; i <= y; i++) {
		z = z * x;
	} cout << z;
}