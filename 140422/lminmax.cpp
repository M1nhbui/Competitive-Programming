#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 1000005
#define MAX 100
#define ll long long

#define int long long
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

ll n, d, a[MAXN];

int solve()
{
	deque<int> qmin, qmax;
	int res = 1, j = 0;
	FOR(i, 0, n - 1)
	{
		while(!qmin.empty() && a[qmin.back()] >= a[i])
	    {
	    	qmin.pop_back();
	    }
	    qmin.push_back(i);
	    while(!qmax.empty() && a[qmax.back()] <= a[i])
	   	{
	    	qmax.pop_back();
	    }
	    qmax.push_back(i);
	    while(a[qmax.front()] - a[qmin.front()] > d)
		{
			if (qmax.front() == j)
			{
				qmax.pop_front();
			}
			if (qmin.front() == j)
			{
				qmin.pop_front();
			}
			j++;
			
		}
		res = max(res, i - j + 1);
	}

	return res;
}

signed main()
{
    read();
    cin >> n >> d;
    FOR(i, 0, n - 1)
    {
    	cin >> a[i];
    }
    cout << solve();
    return 0;
}