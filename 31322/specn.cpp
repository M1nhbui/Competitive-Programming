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

ll t, l, r;

int main()
{
    read();
    cin >> t;
    FOR(i, 1, t)
    {
    	cin >> l >> r;
    	ll a = 0, b = 0;
    	FOR(j, l, r)
    	{
    		if (j % 10 == 9)
    		{
    			a = j;
    			break;
    		}
    	}
    	FOD(j, r, l)
    	{
    		if (j % 10 == 9)
    		{
    			b = j;
    			break;
    		}
    	}
    	if (a == 0)
    	{
    		cout << r - l + 1 << endl;
    	}
    	else
    		cout << (r - l + 1) - ((b - a) / 10 + 1) << endl;
    }
    return 0;
}