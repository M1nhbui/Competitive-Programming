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
    ll count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] == arr[0])
        {
            count++;
        }
    }
    cout << arr[0] << " " << count;
    return 0;
}