#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define lb long double

int main()
{
    ll n, m;
    cin >> n;
    if (n % 2 == 0)
    {
        m = n / 2;
    }
    else
    {
        m = (n - 1) / 2;
    }
    ll arr[MAX];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << arr[m - 1];
    return 0;
}