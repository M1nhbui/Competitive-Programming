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

int main()
{
    read();
    ll s;
    cin >> s;
    string x = to_string(s);
    ll len = x.size();
    ll z = len;
    if (len == 1)
    {
        cout << s;
        return 0;
    }
    ll n = x[0] - '0';
    ll p = 0;
    FOR(i, 1, len)
    {
        p *= 10;
        p += n;
    }
    ll q = 0;
    if (n == 1)
    {
        z--;
        FOR(i, 1, z)
        {
            q *= 10;
            q += 9;
        }
    }
    else
    {
        FOR(i, 1, z)
        {
            q *= 10;
            q += (n - 1);
        }
    }
    if (p <= s)
    {
        cout << p;
    }
    else
    {
        cout << q;
    }
    return 0;
}