#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define lb long double

int main()
{
    ll arr[MAX];
    for (ll i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    ll count[MAX];
    for (ll i = 0; i < 5; i++)
    {
        count[i] = 0;
    }
    for (ll i = 0; i < 5; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                count[i]++;
            }
        }
    }
    for (ll i = 0; i < 5; i++)
    {
        if (count[i] == 3)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}