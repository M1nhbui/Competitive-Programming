#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <iomanip>
#include <set>

#define ll long long
#define fl float
#define ld long double

#define fi first
#define se second
#define p_b push_back
#define pp_b pop_back

#define MAX 400
#define pi 3.1415926535
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define vecll vector<ll>
#define pp pair<ll, ll>

#define xd "\n"
// Nguyễn Phongg :))

using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    char s[MAX][MAX];
    for (ll i = 1; i <= m; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            cin >> s[i][j];
        }
    }
    ll kq = 1e9;
    for (ll i = 1; i <= m; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            for (ll x = i; x <= min(i + 27, m); x++)
            {
                for (ll y = j; y <= min(j + 27, n); y++)
                {
                    if (i != x && j != y && s[i][j] == s[x][y])
                    {
                        kq = min(kq, abs(i - x) + abs(j - y));
                    }
                }
            }
        }
    }
    cout << kq;
}