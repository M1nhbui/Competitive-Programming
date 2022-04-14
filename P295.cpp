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
    ll max = arr[0], m;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            m = i;
        }
    }
    cout << max << " " << m + 1;
    return 0;
}