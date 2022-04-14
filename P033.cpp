#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, q, r;
	cin >> n >> k;
	q = n / k;
	r = n - q * k;
	cout << q + r;
}