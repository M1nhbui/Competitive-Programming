#include <bits/stdc++.h>
#define YES "outside"
#define NO "not outside"
using namespace std;
int main()
{
	long long n, count = 0, i;
	for (i = 1; i <= 10; i++)
	{
		cin >> n;
		count += n;
	}
	if (count % 16 == -9)
		cout << NO;
	else if (count % 4 >= 2)
		cout << YES;
	else if (count % 8 == 4)
		cout << NO;
	else if (count % 16 == 8)
		cout << NO;
	else if (count % 16 == 9)
		cout << YES;
	else if (count % 3 == 0)
		cout << YES;
	else
		cout << NO;
	return 0;
}