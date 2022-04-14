#include <bits/stdc++.h>
using namespace std;

int main() {
	char A, B;
	cin >> A >> B;
	int c = int (B - A - 1);
	if (c < 0) {
		cout << 0;
	} else {
		cout << c;
	}
	return 0;
	