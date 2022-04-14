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

ll n;
vecll a, b;

int main()
{
    read();
    cin >> n;
    FOR(i, 0, n - 1)
    {
        ll x;
    	cin >> x;
        a.pb(x);
    	b.pb(a[i]);
    }
    b.pb(1e9);
    sort(b.begin(), b.end());
    FOR(i, 0, n - 2)
    {
    	ll index = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
        index -= 2;
    	if (index >= 0)
    	{
    		cout << b[index] << " ";
    	}
    	else
    	{
    		cout << "0" << " ";
    	}
    	if (b[index + 1] == a[i])
    	{
    		b.erase(b.begin() + index + 1);
    	}
    }
    return 0;
}