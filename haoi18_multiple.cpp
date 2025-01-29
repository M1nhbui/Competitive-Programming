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
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

long long n;
bool f[2321221];
long long a[2132323], b[1223232];
long long dem = 0;
void sangnguyento(long long n)
{
    for (long long i = 0; i <= n; ++i)
        f[i] = true;
    f[0] = false;
    f[1] = false;
    for (long long i = 2; i * i <= n; ++i)
        if (f[i] == true)
            for (long long j = i * i; j <= n; j += i)
                f[j] = false;
    for (long long i = 1; i <= n; i++)
        if (f[i] == true)
            a[++dem] = i;
    a[0] = 1;
}
void giai(long long n)
{
    for (long long i = 3; i <= dem; i++)
    {
        if (n / (a[i] * a[i - 1]) == a[i - 2])
        {
            cout << a[i] * a[i - 1] * a[i - 2] << endl;
            return;
        }
        if (n / (a[i] * a[i - 1]) < a[i - 2])
        {
            cout << a[i - 1] * a[i - 2] * a[i - 3] << endl;
            return;
        }
    }
}

void code()
{
    sangnguyento(1000000);
    int k;
    cin >> k;
    while (k--)
    {
        cin >> n;
        if (n < 30)
            cout << "-1" << '\n';
        else
            giai(n);
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
// ██████╗░██╗░░░██╗██╗  ██╗░░░░░███████╗  ███╗░░░███╗██╗███╗░░██╗██╗░░██╗
// ██╔══██╗██║░░░██║██║  ██║░░░░░██╔════╝  ████╗░████║██║████╗░██║██║░░██║
// ██████╦╝██║░░░██║██║  ██║░░░░░█████╗░░  ██╔████╔██║██║██╔██╗██║███████║
// ██╔══██╗██║░░░██║██║  ██║░░░░░██╔══╝░░  ██║╚██╔╝██║██║██║╚████║██╔══██║
// ██████╦╝╚██████╔╝██║  ███████╗███████╗  ██║░╚═╝░██║██║██║░╚███║██║░░██║
// ╚═════╝░░╚═════╝░╚═╝  ╚══════╝╚══════╝  ╚═╝░░░░░╚═╝╚═╝╚═╝░░╚══╝╚═╝░░╚═╝