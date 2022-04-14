#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
#define lb long double

int main()
{
    ll n;
    lb arr[MAX];
    cin >> n;
    lb sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    lb count = 0;
    for (ll i = 0; i < n; i += 2)
    {
        sum += arr[i];
        count++;
    }
    cout << setprecision(2) << fixed << sum / count;
}