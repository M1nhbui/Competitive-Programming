/*
//
//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \|     |// '.
//                 / \|||  :  |||// \
//                / _||||| -:- |||||- \
//               |   | \\  -  /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//                     # XINDUNGBUG
*/
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

bool f[2321221];
vecll snt;

ll mod(string a, ll b)
{
    ll r = 0;
    for (ll i = 0; i < a.size(); i++)
        r = (r * 10 + (a[i] - 48)) % b;
    return r;
}

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

void sangNguyenTo(ll n)
{
    FOR(i, 0, n)
    {
        f[i] = true;
    }
    f[0] = false;
    f[1] = false;
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (f[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                f[j] = false;
            }
        }
    }
    for (ll i = 2; i <= n; i++)
    {
        if (f[i])
        {
            snt.push_back(i);
        }
    }
}

void code()
{
    string n;
    cin >> n;
    ll index = 0;
    sangNguyenTo(2321221);
    ll cnt = 0;
    while (n != "1")
    {
        if (mod(n, snt[index]) == 0)
        {
            n = div(n, snt[index]);
            cnt++;
            if (cnt > 1)
            {
                cout << "YES";
                return;
            }
        }
        else
        {
            index++;
            cnt = 0;
        }
    }
    cout << "NO";
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
// ██████╗░██╗░░░██╗██╗  ██╗░░░░░███████╗  ███╗░░░███╗██╗███╗░░██╗██╗░░██╗
// ██╔══██╗██║░░░██║██║  ██║░░░░░██╔════╝  ████╗░████║██║████╗░██║██║░░██║
// ██████╦╝██║░░░██║██║  ██║░░░░░█████╗░░  ██╔████╔██║██║██╔██╗██║███████║
// ██╔══██╗██║░░░██║██║  ██║░░░░░██╔══╝░░  ██║╚██╔╝██║██║██║╚████║██╔══██║
// ██████╦╝╚██████╔╝██║  ███████╗███████╗  ██║░╚═╝░██║██║██║░╚███║██║░░██║
// ╚═════╝░░╚═════╝░╚═╝  ╚══════╝╚══════╝  ╚═╝░░░░░╚═╝╚═╝╚═╝░░╚══╝╚═╝░░╚═╝