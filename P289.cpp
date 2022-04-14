#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define lb long double

int main()
{
    ll n;
    ll arr[MAX], arr1[MAX];
    cin >> n;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    sort(arr, arr + n);
    sort(arr1, arr1 + n);
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] != arr1[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}