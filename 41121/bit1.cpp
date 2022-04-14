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
#define pb push_back
#define sz size
#define endl "\n"
#define sp setprecision
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define vecldb vector<long double>
#define vecpll vector<pair<long long, long long>>
#define vecpldb vector<pair<long double, long double>>
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"
// #define pathio "/home/minhbui/Documents/Code/IO/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

string div(string a, ll b)
{
    ll s;
    ll r = 0;
    string c = "";
    for (ll i = 0; i < a.size(); i++)
    {
        r = r * 10 + (a[i] - 48);
        s = r / b;
        r = r % b;
        c += char(s + '0');
    }
    while (c[0] == '0' && c.size() > 1)
    {
        c.erase(0, 1);
    }
    return c;
}

ll divMod(string a, ll b)
{
    ll r = 0;
    for (ll i = 0; i < a.size(); i++)
        r = (r * 10 + (a[i] - 48)) % b;
    return r;
}

string sum(string a, string b)
{
    if (a == b && a == "")
        return "0";
    string c = "";
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    ll r = 0;
    for (ll i = max(a.size(), b.size()) - 1; i >= 0; i--)
    {
        ll sum = a[i] + b[i] - '0' * 2 + r;
        c = char(sum % 10 + '0') + c;
        r = sum / 10;
    }
    if (r > 0)
        c = "1" + c;
    return c;
}

long long power(long long a, long long b, long long mod)
{
    if (b == 0)
        return 1;
    long long t = power(a, b / 2, mod);
    t = (t * t) % mod;
    if (b % 2 == 1)
        t = (t * a) % mod;
    return t;
}

ll binToDec(string s)
{
    ll c = 0;
    if (s == "0")
    {
        // string m = to_string(c);
        return c;
    }
    FOR(i, 0, (int)s.sz() - 1)
    {
        if (s[i] == '1')
        {
            c += power(2, s.sz() - 1 - i, 1000000000000000001);
        }
    }
    // string m = to_string(c);
    return c;
}


void solve(string s)
{
    string res = "0";
    FOR(i, 0, s.size() - 1)
    {
        ll c = 0;
        string n;
        if (i == s.size() - 1)
        {
            n = "0";
        }
        else
        {
            n = s.substr(0, s.size() - i - 1);
        }
        ll lan = power(2, i, 1000000000000000001);
        c += binToDec(n) * lan;
        if (s[s.size() - i - 1] == '1')
        {
            c += binToDec(s.substr(s.size() - i, i));
            c += 1;
        }
        string m = to_string(c);
        res = sum(res, m);
    }
    cout << res;
    return;
}

void code()
{
    string s;
    cin >> s;
    string n = "";
    while (s != "0")
    {
        // cout << divMod(s, 2) << endl;
        n += to_string(divMod(s, 2));
        s = div(s, 2);
    }
    reverse(n.begin(), n.end());
    // cout << n << endl;
    solve(n);
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