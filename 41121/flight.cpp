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
#define endl "\n"
#define sp setprecision
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define vecldb vector<long double>
#define vecpll vector<pair<long long, long long>>
#define vecpldb vector<pair<long double, long double>>
// #define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"
#define pathio "/home/minhbui/Documents/Code/IO/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

bool com(string a, string b)
{
    if (a.size() > b.size())
        return true;
    else if (a.size() == b.size())
    {
        if (a >= b)
            return true;
        else
            return false;
    }
    else
        return false;
}

string sum(string a, string b)
{
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    a = '0' + a;
    b = '0' + b;
    FOD(i, a.size() - 1, 0)
    {
        a[i] = a[i] + b[i] - '0';
        if (a[i] > '9')
        {
            a[i] -= 10;
            a[i - 1]++;
        }
    }
    while (a[0] == '0')
        a.erase(0, 1);
    return a;
}
string sub(string a, string b)
{
    if (com(b, a))
    {
        string c = a;
        a = b;
        b = c;
    }
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    a = '0' + a;
    b = '0' + b;
    FOD(i, a.size() - 1, 0)
    {
        a[i] = a[i] - b[i] + '0';
        if (a[i] < '0')
        {
            a[i] += 10;
            a[i - 1]--;
        }
    }
    while (a[0] == '0')
        a.erase(0, 1);
    if (a.size() == 0)
        a = "0";
    return a;
}

string mulBigAndSmall(string a, int b)
{
    string c = "";
    FOR(i, 1, b)
    {
        c = sum(c, a);
    }
    return c;
}

string mulBigAndBig(string a, ll b) {
    string c = "";
    while (a.size() < c.size()) a = "0" + a;
    while (a.size() > c.size()) c = "0" + c;
    ll nho = 0;
    FOD(i,a.size()-1,0) {
        ll Product = nho + (a[i] - '0') * b;
        c[i] = char(Product % 10 + '0');
        nho = Product / 10;
    }
    while (nho > 0) {
        c = char((nho % 10) + '0') + c;
        nho /= 10;
    }
    return c;
}

string divBigAndSmall(string a, int b)
{
    ll s, r = 0;
    string ans = "";
    FOR(i, 0, a.size() - 1)
    {
        r = r * 10 + a[i] - '0';
        s = r / b;
        r %= b;
        ans.pb(char(s + '0'));
    }
    while (ans.size() > 1 && ans[0] == '0')
    {
        ans.erase(0, 1);
    }
    return ans;
}

int divMod(string a, int b)
{
    ll r = 0;
    FOR(i, 0, a.size() - 1)
    {
        r = (r * 10 + a[i] - '0') % b;
    }
    return r;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void code()
{
    ll n;
    cin >> n;
    int arr[n + 5];
    FOR(i, 1, n)
    {
        cin >> arr[i];
    }
    string lcm = "1";
    FOR(i, 1, n)
    {
        int tmp = divMod(lcm, arr[i]);
        tmp = gcd(tmp, arr[i]);
        lcm = mulBigAndBig(lcm, arr[i] / tmp);
    }
    cout << lcm;
    return;
}

int main()
{
    // freopen(lfi);
    // freopen(lfo);
    cin.tie(0);
    cout.tie(0);

    code();

    fclose(stdin);
    fclose(stdout);
    return 0;
}
// ██████╗░██╗░░░██╗██╗  ██╗░░░░░███████╗  ███╗░░░███╗██╗███╗░░██╗██╗░░██╗
// ██╔══██╗██║░░░██║██║  ██║░░░░░██╔════╝  ████╗░████║██║████╗░██║██║░░██║
// ██████╦╝██║░░░██║██║  ██║░░░░░█████╗░░  ██╔████╔██║██║██╔██╗██║███████║
// ██╔══██╗██║░░░██║██║  ██║░░░░░██╔══╝░░  ██║╚██╔╝██║██║██║╚████║██╔══██║
// ██████╦╝╚██████╔╝██║  ███████╗███████╗  ██║░╚═╝░██║██║██║░╚███║██║░░██║
// ╚═════╝░░╚═════╝░╚═╝  ╚══════╝╚══════╝  ╚═╝░░░░░╚═╝╚═╝╚═╝░░╚══╝╚═╝░░╚═╝