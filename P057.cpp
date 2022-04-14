#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x, y;
	cin >> x;
	y = round(sqrt(x));
	long long a = 0;
	for (long long i = 1; i <= y; i++){
		if (x%i==0) {
			a++;
		} 
	} cout << a;
	return 0;
}