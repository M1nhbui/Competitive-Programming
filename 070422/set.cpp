#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"
#define fi first
#define se second

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

stack<int> h;
int n, m, d[MAXN];

struct com
{
    int x;
    int y;
    bool a;
} s[200005];

bool cmp(com x, com y)
{
    return ((x.x < y.x) || ((x.x == y.x) && (x.a > y.a)));
}

int main()
{
    read();
    cin >> n >> m;
    FOR(i, 1, m)
    {
        cin >> s[2 * i - 1].x;
        s[2 * i - 1].y = i;
        s[2 * i - 1].a = 1;
        cin >> s[2 * i].x;
        s[2 * i].y = i;
    }
    sort(s + 1, s + 1 + 2 * m, cmp);
    int ans = 0;
    FOR(i, 1, 2 * m)
    {
        if (s[i].a == 1)
        {
            h.push(s[i].y);
        }
        else
        {
            if (d[s[i].y])
            {
                continue;
            }
            ans++;
            while (!h.empty())
            {
                d[h.top()] = 1;
                h.pop();
            }
        }
    }
    cout << ans;
}