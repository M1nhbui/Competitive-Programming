#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[MAX];
    ll count = 0;
    ll count2 = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        if (arr[i] == arr[i + 1] - 1)
        {
            count++;
        }
        else
        {
            if (count2 < count)
            {
                count2 = count;
            }
            count = 0;
        }
    }
    cout << max(count2, count);
    return 0;
}