#include <bits/stdc++.h>
using namespace std;
#define MAX 100

bool prime(long long n)
{
    bool prime = n > 1;
    for (long long i = 2; i <= sqrt(n); i++)
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
    long long n, m;
    cin >> n >> m;
    int arr[MAX];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
        if (prime(arr[i]) && n % arr[i] == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}