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

deque<ll> q;
ll n, k, a[MAXN], ans[MAXN];

int main()
{
    read();
    cin >> n >> k;
    FOR(i, 1, n)
    {
    	cin >> a[i];
    }
    FOR(i, 1, n)
    {
    	while(!q.empty() && a[q.back()] >= a[i])
    	{
    		q.pop_back();
    	}
    	q.push_back(i);
    	if (q.front() + k <= i) q.pop_front();
    	if (i>=k) ans[i] = a[q.front()];
    }
    FOR(i, k, n)
    {
    	cout << ans[i] << endl;;
    }
    return 0;
}