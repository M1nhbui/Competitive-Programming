#include <bits/stdc++.h>
using namespace std;

int main() {
	long long N, M;
	M = 1;
	cin >> N;
	for (long long i = 1; i <= N; i++) {
		M = M * i;
	} cout << M;
}