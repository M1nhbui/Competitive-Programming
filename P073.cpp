#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
    int x = n;
	int sum = 0;
	for (long long i = 1; i < 999999999; i++) {
		int m = n % 10;
		n = (n - (n % 10)) / 10;
		sum += m;
		if (n == 0) {
			break;
		}
	}
    if (x % sum == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}