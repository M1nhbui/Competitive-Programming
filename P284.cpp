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
    cout << arr[n - 1] << " " << arr[n - 2] << " " << arr[n - 3];
    return 0;
}