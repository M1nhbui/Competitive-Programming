#include<bits/stdc++.h>
using namespace std;

int main() {
	long long n, m, z;
	cin >> n;
	if (n%2==1) {
		m = floor(n/2);
		z = m + 1;
		cout << m << z;
	} else {
		cout << (n/2) << (n/2);
	}
	return 0;
}