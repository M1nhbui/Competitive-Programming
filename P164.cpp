#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

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
    int arr[MAX];
    for (int i = 2; i < n; i++)
    {
        arr[i] = i;
    }
    for (int i = 2; i < n; i++)
    {
        if (prime(arr[i]))
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}