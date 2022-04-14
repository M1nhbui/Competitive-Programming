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

vector<string> word(MAXN);
vector<string> num(MAXN);


void code()
{
    string s;
    getline(cin, s);
    // s.insert(0, 10);
    bool flag = false;
    ll n = s.size() - 1;
    ll ind = 0;
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        ind--;
    }
    FOR(i, 0, n)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            num[ind].pb(s[i]);
        }
        if ((s[i] >= 'a' && s[i] <= 'z') && (s[i + 1] >= '0' && s[i + 1] <= '9'))
        {
            ind++;
        }
    }
    cout << ind << endl;
    sort(num.begin(), num.end());
    FOR(i, 0, ind)
    {
        cout << num[i] << " ";
    }
    // FOR(i, 0, n)
    // {
    //     if (s[i])
    // }
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