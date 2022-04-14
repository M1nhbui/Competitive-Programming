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
int n, q, k, x;
vector<int> s;

int main()
{
    read();
    cin >> n >> q >> k;
    int cnt = 0;
    FOR(i, 1, n)
    {
        cin >> x;
        if (x == q)
        {
            cnt++;
            s.pb(i);
        }
    }
    if (s.size() == 0)
    {
        cout << -1;
        return 0;
    }
    cout << cnt << endl;
    FOR(i, 0, int(s.size() - 1))
    {
        cout << s[i] << " ";
    }
    return 0;
}