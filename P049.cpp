#include <bits/stdc++.h>
using namespace std;

int main() {
	float a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << fixed << setprecision(2) << (a+b)+(b-c)+(c*d)+(d/a);
}