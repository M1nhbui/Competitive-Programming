#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;

	// thieu if n = 1
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			cout << i;
			return 0;
		}
	} cout << "YES";
	return 0;
}

