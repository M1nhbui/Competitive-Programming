#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a[4];
	cin >> a[0] >> a[1] >> a[2] >> a[3];
	sort(a, a + 4);
	cout << a[1];
	return 0;
}