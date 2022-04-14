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


ll mod = 1e9 + 7;

long long nhan(long long a,long long b, long long mod)
{
    if (b == 0) 
        return 0;
    long long t = nhan(a, b / 2, mod);      
    t = (t + t) % mod; 
    if (b % 2 == 1) 
        t = (t + a) % mod;
    return t;
} 


int main()
{
    read();
    ll l, r;
    cin >> l >> r;
    ll x = r - l + 1;
    cout << (x + (x % mod) * ((x - 1) % mod) / 2) % mod;
    return 0;
}