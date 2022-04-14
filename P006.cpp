#include <bits/stdc++.h>
using namespace std;

int main() {
	string x;
	cin >> x;
	for (long long i = x.length()-1; i >= 0; i--) {
		cout << x[i];
	}
}