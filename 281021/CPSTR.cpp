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

void code()
{
    string s, t, sub, tmp = "";
    cin >> s;
    ll n = s.size();
    FOR(i, 1, n - 1)
    {
        if (n % i == 0)
        {
            sub = s.substr(0, i);
            // cout << sub << endl;
            FOR(j, 1, s.size() / sub.size())
            {
                tmp += sub;
            }
            // cout << tmp << endl;
            if (tmp == s)
            {
                cout << s.size() / sub.size() << sub;
                return;
            }
            else
            {
                tmp = "";
            }
        }
    }
    cout << 1 << s;
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