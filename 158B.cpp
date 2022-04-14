#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100
#define ll long long

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"

void read()
{
    // ios_base::sync_with_stdio(false);
    // freopen("name.inp", "r", stdin);
    // freopen("name.out", "w", stdout);
    freopen(pathio "input.txt", "r", stdin);
    freopen(pathio "output.txt", "w", stdout);
    cin.tie(NULL);
    cout.tie(NULL);
    return;
}

ll s[MAXN];
ll a[5];

int main()
{
    read();
    ll n;
    cin >> n;
    FOR(i, 1, n)
    {
        cin >> s[i];
        a[s[i]]++;
    }
    ll ans = 0, x;
    ans += a[4];
    if (a[2] > 0)
    {
        if (a[2] % 2 == 0)
        {
            ans += a[2] / 2;
            a[2] = 0;
        }
        else
        {
            ans += (a[2] - 1) / 2;
            a[2] = 1;
        }
    }
    if (a[1] == a[3])
    {
        ans += a[1];
        a[1] = 0;
        a[3] = 0;
    }
    else if (a[1] > a[3])
    {
        ans += a[3];
        x = a[1] - a[3];
    }
    else
    {
        ans += a[1];
        x = a[3] - a[1];
    }
    if (a[1] == 0)
    {
        ans += a[2];
    }
    else
    {
        if (a[1] % 2 == 0)
        {
            a[1] /= 2;
            a[2] += a[1];
            ans += (a[2] + 1) / 2;
        }
        else
        {
            a[1] /= 2;
            a[2] += a[1];
            ans += (a[2])
        }
    }
    return 0;
}