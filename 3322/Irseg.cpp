#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 1000005
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

ll a[MAXN], s[MAXN];

int main()
{
    read();
    ll n;
    cin >> n;
    FOR(i, 1, n)
    {
    	cin >> a[i];
    	s[i] = s[i - 1] + a[i];
    }
    ll sum = 0;
    ll ans = 1e14;
    FOD(i, n, 1)
    {
    	sum += a[i];
    	ll t = lower_bound(s + 1, s + 1 + n, sum) - s;
    	if (t >= 1 && t < i)
    	{
    		ans = min(ans, abs(s[t] - sum));
    	}
    	t--;
    }
    cout << ans;
    return 0;
}