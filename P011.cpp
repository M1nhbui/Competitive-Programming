#include <bits/stdc++.h>
using namespace std;

int main() {
	long double a, b, c, p;
	cin >> a >> b >> c;
	p = (a + b + c) / 2;
	cout << setprecision(6) << fixed << sqrt(p*(p-a)*(p-b)*(p-c));
}