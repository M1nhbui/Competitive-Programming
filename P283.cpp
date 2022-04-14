#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define lb long double

int main()
{
    ll n;
    cin >> n;
    ll arr[MAX];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (ll i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}