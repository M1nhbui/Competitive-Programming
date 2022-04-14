#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
	bool prime = true;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}

int main()
{
	long long n;
	cin >> n;
	int count = 0;
	for (long long i = 2; i < n + 1; i++)
	{
		if (prime(i))
		{
			count++;
		}
	}
	cout << count;
}