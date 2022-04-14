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
    ll count1 = 0;
    sort(arr, arr + 5);
    for (ll i = 0; i < 5; i++)
    {
        if (count[i] == 2)
        {
            count1++;
        }
    }
    // cout << count1 << endl;
    if (count1 == 4)
    {
        if (arr[0] == arr[2] || arr[0] == arr[3])
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}