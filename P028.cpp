#include <iostream>
using namespace std;

int main() {
	long long n,k;
	cin >> n >> k;
	long long sum = 0;
	for (long long x = 1; x <= n; x++) {
		sum += x * (x + k);
	} cout << sum;
}