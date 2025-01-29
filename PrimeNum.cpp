#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
	if (n < 2)
	{
		return false;
	}
	if (n == 2 || n == 3)
	{
		return true;
	}
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
    int n;
    cin >> n;
    cout << prime(n);
}