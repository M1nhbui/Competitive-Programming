#include <bits/stdc++.h>
using namespace std;

int main() {
	string z;
	cin >> z;
	cout << z;
	for (long long i = z.length()-1; i >= 0; i--) {
		cout << z[i];
	}
}