#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x;
	cin >> x;
	if ((x-3)%3==0 && x>3){//x%3==0 && x > 0
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}