#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= (int)r; i++)
#define FOD(i, r, l) for (int i = r; i >= (int)l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"
#define fi first
#define se second

void read()
{ // ios_base::sync_with_stdio(false);
    // freopen("name.inp", "r", stdin);
    // freopen("name.out", "w", stdout);
    freopen(pathio "input.txt", "r", stdin);
    freopen(pathio "output.txt", "w", stdout);
    cin.tie(NULL);
    cout.tie(NULL);
    return;
}

ll q, n, h[MAXN], dpL[MAXN], dpR[MAXN];

void tinhL()
{
    stack<ll> s;
    while (!s.empty())
    {
        s.pop();
    }
    FOR(i, 1, n)
    {
        while (!s.empty() && h[s.top()] < h[i])
        {
            s.pop();
        }
        if (!s.empty() && h[s.top()] == h[i])
        {
            dpL[i] = dpL[s.top()] + 1;
        }
        s.push(i);
    }
}

void tinhR()
{
    stack<ll> s;
    while (!s.empty())
    {
        s.pop();
    }
    FOD(i, n, 1)
    {
        while (!s.empty() && h[s.top()] < h[i])
        {
            s.pop();
        }
        if (!s.empty() && h[s.top()] == h[i])
        {
            dpR[i] = dpR[s.top()] + 1;
        }
        s.push(i);
    }
}

int main()
{
    read();
    cin >> q;
    FOR(t, 1, q)
    {
        cin >> n;
        FOR(i, 1, n)
        {
            cin >> h[i];
        }
        memset(dpL, 0, sizeof(dpL));
        memset(dpR, 0, sizeof(dpR));
        tinhL();
        tinhR();
        // stack<ll> s;
        // while (!s.empty())
        // {
        //     s.pop();
        // }
        // FOR(i, 1, n)
        // {
        //     while (!s.empty() && h[s.top()] < h[i])
        //     {
        //         s.pop();
        //     }
        //     if (!s.empty() && h[s.top()] == h[i])
        //     {
        //         dpL[i] = dpL[s.top()] + 1;
        //     }
        //     s.push(i);
        // }
        // while (!s.empty())
        // {
        //     s.pop();
        // }
        // FOD(i, n, 1)
        // {
        //     while (!s.empty() && h[s.top()] < h[i])
        //     {
        //         s.pop();
        //     }
        //     if (!s.empty() && h[s.top()] == h[i])
        //     {
        //         dpR[i] = dpR[s.top()] + 1;
        //     }
        //     s.push(i);
        // }
        FOR(i, 1, n)
        {
            cout << dpL[i] + dpR[i] << " ";
        }
        cout << endl;
    }
    return 0;
}