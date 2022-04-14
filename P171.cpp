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
    ll m; 
    cin >> m;
    ll countChan = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countChan++;
        }
        if (countChan == m)
        {
            return 0;
        }
        cout << arr[i] << " ";
        
    }
    return 0;
}