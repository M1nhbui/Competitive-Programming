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

ll m, n, e[MAXN], s[MAXN];
vecll q;
ll maxx = -1e9;
ll a[MAXN];
bool checksub1 = true;
bool tang = true;
bool giam = true;

void solve(ll n, ll x, ll ind)
{
    if (x == n + 1)
    {
        ll cnt = s[ind];
        ll cnt2 = 0;
        FOR(i, 1, n)
        {
            if (a[i] == 1)
            {
                cnt += e[i];
                if (cnt >= 0)
                {
                    cnt2++;
                }
                else
                {
                    return;
                }
            }
        }
        maxx = max(maxx, cnt2);
        return;
    }
    FOR(i, 0, 1)
    {
        a[x] = i;
        solve(n, x + 1, ind);
    }
}

void subtask1(ll x)
{
    ll tmp = x;
    ll cnt = 0;
    if (tang)
    {
        ll t = n + 1;
        FOD(i, n, 1)
        {
            if (e[i] < 0)
            {
                break;
            }
            t = i;
            cnt++;
        }
        if (t > 1)
        {
            FOD(i, t - 1, 1)
            {
                tmp += e[i];
                if (tmp < 0)
                {
                    break;
                }
                cnt++;
            }
        }
    }
    else
    {
        FOR(i, 1, n)
        {
            tmp += e[i];
            if (tmp < 0)
            {
                break;
            }
            cnt++;
        }
    }
    cout << cnt << " ";
}

int main()
{
    read();
    cin >> n >> m;
    ll tmp;
    FOR(i, 1, n)
    {
        cin >> e[i];
        if (i == 1)
        {
            continue;
        }
        if (e[i] > e[i - 1])
        {
            giam = false;
        }
        if (e[i] < e[i - 1])
        {
            tang = false;
        }
    }
    if (!tang && !giam)
    {
        checksub1 = false;
    }
    if (checksub1)
    {
        FOR(i, 1, m)
        {
            cin >> s[i];
            subtask1(s[i]);
        }
        return 0;
    }
    FOR(i, 1, m)
    {
        cin >> s[i];
    }
    FOR(i, 1, m)
    {
        maxx = -1e9;
        solve(n, 1, i);
        cout << maxx << " ";
    }
    return 0;
}