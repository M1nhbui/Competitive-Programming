#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define lb long double

bool prime(int n)
{
	bool prime = true;
    if (n < 2)
    {
        return false;
    }
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
    ll n;
    ll arr[MAX];
    cin >> n;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (prime(arr[i]))
        {
            count++;
        }
    }
    // cout << count << endl;
    for (ll i = 0; i < n; i++)
    {
        if (prime(arr[i]))
        {
            cout << arr[i] << " ";
        }
    }
}
