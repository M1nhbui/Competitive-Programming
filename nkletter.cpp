#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;
#define MAXN 900005
#define MAX 100
#define ll long long
#define ull unsigned long long
#define ldb long double
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
#define sp setprecision
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define pathio "D:/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

string Sb, Se;

void code()
{
    // ll j = 0;
    // ll count = 0;
    cin >> Sb >> Se;
    ll n = Sb.size();
    ll m = Se.size();
    // cout << Sb[n - 1] << ' ' << Se[j];
    FOR(i, 0, Sb.size())
    {
        string str = Sb.substr(i);
        if (Se.find(str) == 0)
        {
            cout << Se.size() + i;
            return;
        }
    }
    return;
}

int main()
{
    freopen(lfi);
    freopen(lfo);
    cin.tie(0);
    cout.tie(0);

    code();

    fclose(stdin);
    fclose(stdout);
    return 0;
}