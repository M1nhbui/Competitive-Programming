#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define lb long double

int main()
{
    ll n;
    ll arr[MAX];
    cin >> n;
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 4 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}