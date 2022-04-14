#include <bits/stdc++.h>
using namespace std;

int main() {
	long long A, B, C;
	cin >> A >> B >> C;
	if (B + C > A && A + C > B && A + B > C) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}