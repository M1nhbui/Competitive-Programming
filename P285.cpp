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
    sort(arr, arr + n);
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}