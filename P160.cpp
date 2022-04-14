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
    sort(arr, arr + 5);
    if (arr[0] == arr[4])
    {
        cout << "NO";
        return 0;
    }
    else if (arr[0] == arr[1] && arr[0] == arr[2] && arr[3] == arr[4] || arr[2] == arr[3] && arr[2] == arr[4] && arr[0] == arr[1])
    {
        cout << "YES";
        return 0;
    }
    else
    {
        cout << "NO";
        return 0;
    }
    return 0;
}