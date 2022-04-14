#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[MAX];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << arr[n - 1];
    return 0;
}