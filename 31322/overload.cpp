#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 100005
#define MAX 100
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
    ios_base::sync_with_stdio(false);
    freopen("overload.inp", "r", stdin);
    freopen("overload.out", "w", stdout);
    // freopen(pathio "input.txt", "r", stdin);
    // freopen(pathio "output.txt", "w", stdout);
    cin.tie(NULL);
    cout.tie(NULL);
    return;
}

ll a[MAXN], b[MAXN], c[MAXN];

int main()
{
    read();
    ll n, m;
    cin >> n >> m;
    FOR(i, 1, n)
    {
    	cin >> a[i];
    }
    FOR(i, 1, m)
    {
    	cin >> b[i];
    }
    b[0] = -1;
    ll q = m;
    ll top = 0;
    FOD(i, n, 1)
    {
    	while (b[q] >= a[i])
    	{
    		c[++top] = q--;
    	}
    	if (top > 0)
    	{
    		a[i] = c[top--];
    	}
    	else
    	{
    		a[i] = -1;
    	}
    }
    FOR(i, 1, n)
    {
    	cout << a[i] << endl;
    }
    return 0;
}