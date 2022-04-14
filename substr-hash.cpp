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
#define fi first
#define se second

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

const int base = 31;
const ll MOD = 1000000003;
const ll maxn = 1000111;

ll POW[maxn], h[maxn];

ll getHash(int i, int j)
{
    return (h[j] - h[i - 1] * POW[j - i + 1] + MOD * MOD) % MOD;
}

int main()
{
    read();
    string T, P;
    cin >> T >> P;
    int lenT = T.size(), lenP = P.size();
    T = " " + T;
    P = " " + P;
    POW[0] = 1;
    for (int i = 1; i <= lenT; i++)
    {
        POW[i] = (POW[i - 1] * base) % MOD;
    }
    for (int i = 1; i <= lenT; i++)
    {
        h[i] = (h[i - 1] * base + (T[i] - 'a' + 1)) % MOD;
    }
    ll hashP = 0;
    for (int i = 1; i <= lenP; i++)
    {
        hashP = (hashP * base + (P[i] - 'a' + 1)) % MOD;
    }
    for (int i = 1; i <= lenT - lenP + 1; i++)
    {
        if (hashP == getHash(i, i + lenP - 1))
        {
            cout << i << " ";
        }
    }
}