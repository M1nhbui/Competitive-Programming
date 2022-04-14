#include <bits/stdc++.h>
using namespace std;

int main() {
	char A;
	long long N;
	cin >> A >> N;
	if (A + N > 122) {
		cout << char(A + N - 26);
	} else {
		cout << char(A + N);
	}
}