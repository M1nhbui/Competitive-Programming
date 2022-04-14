#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define piii pair<pair<int, int>, int>
#define fi first
#define se second
#define MAXN 100005
int n;

piii a[MAXN];
//f[i] = 0 nếu bánh xe i chạy cùng chiều kim đồng hồ
//f[i] = 1 nếu bánh xe i chạy ngc chiều kim đồng hồ
int f[MAXN];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        int s, d, c;
        cin >> s >> d >> c;
        a[i] = {{s, d}, c};
    }
    sort(a + 1, a + n);
    // for(int i = 1; i < n; i++)
    // 	cout<<a[i].fi.fi<<" "<<a[i].fi.se<<" "<<a[i].se<<endl;

    f[1] = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i].se == 0)
            f[a[i].fi.se] = f[a[i].fi.fi];
        else
            f[a[i].fi.se] = 1 - f[a[i].fi.fi];
    }
    cout << f[n];
    return 0;
}
