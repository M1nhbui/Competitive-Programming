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
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}