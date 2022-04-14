#include <bits/stdc++.h>
using namespace std;
#define MAX 10000

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
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << 0;
        return 0;
    }
    if (n < 4)
    {
        cout << 1;
        return 0;
    }
    if (prime(n))
    {
        cout << 1;
    }
    else 
    {
        cout << 0;
    }
    return 0;
}