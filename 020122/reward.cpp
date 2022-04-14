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

int n, a[MAXN], f[MAXN];
map<int, int> m;

int main()
{
    read();
    cin >> n;
    int end = 0;
    FOR(i, 1, n)
    {
    	cin >> a[i];
    	end = max(end, a[i]);
    	m[a[i]]++;
    }
    FOR(i, 1, end)
    {
    	f[i] = i * m[i];
    }
    FOR(i, 2, end)
    {
    	f[i] = max(f[i - 1], f[i] + f[i - 2]);
    }
    cout << f[end];
    return 0;
}