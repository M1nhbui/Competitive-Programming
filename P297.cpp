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
    sort(a, a + n);
    long long max2 = 0;
    for (long long i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] != a[a.size() - 1])
        {
            cout << a[i] << ' ';
            max2 = a[i];
            break;
        }
    }
    for (long long i = 0; i < a.size(); i++)
    {
        if (x[i] == max2)
        {
            cout << i + 1;
            break;
        }
    }
}