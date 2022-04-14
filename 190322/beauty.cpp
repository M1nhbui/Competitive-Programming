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

ll n, a[MAXN];

int main()
{
    read();
    cin >> n;
    FOR(i, 1, n)
    {
    	cin >> a[i];
    }
    if (n == 4)
    {
        cout << a[1] + a[2] + a[3] + a[4];
        return 0;
    }
    a[n + 1] = -1e15;
    ll best = -1e15;
    ll sum = a[1] + a[2] + a[3] + a[4];
    for (int i = 5; i < n; i += 2)
    {
    	sum = max(sum + a[i] + a[i + 1], a[i - 2] + a[i - 1] + a[i] + a[i + 1]);
    	best = max(best, sum);
    }
    // cout << best << endl;
    sum = a[2] + a[3] + a[4] + a[5];
    best = max(sum, best);
    for (int i = 6; i < n; i += 2)
    {
    	sum = max(sum + a[i] + a[i + 1], a[i - 2] + a[i - 1] + a[i] + a[i + 1]);
    	best = max(best, sum);
    }
    cout << best;
    return 0;
}