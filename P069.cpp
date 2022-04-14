#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	int tich = 1;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		tich *= a;
		tich %= 10;
	}
	cout << abs(tich);
}