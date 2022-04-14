#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define lb long double

int main()
{
    ll n, k;
    ll arr[MAX];
    cin >> n >> k;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % k == 0)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}