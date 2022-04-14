#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	float sum = 0;
    float count = 0;
	for (long long i = 1; i < 999999999; i++) {
		int m = n % 10;
		n = (n - (n % 10)) / 10;
		sum += m;
        count ++;
		if (n == 0) {
			break;
		}
	}
    cout << setprecision(2) << fixed << float(sum/count);
}