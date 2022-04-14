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

// void solve()
// {
//     if (l > d)
//     {
//         cout << d;
//         return;
//     }
//     else
//     {
//         cout << d * (r / d + 1);
//         return;
//     }
//     return;
// }

int main()
{
    int q, l, r, d;
    read();
    cin >> q;
    FOR(i, 1, q)
    {
        cin >> l >> r >> d;
        if (l > d)
        {
            cout << d;
        }
        else
        {
            cout << d * (r / d + 1);
        }
        cout << endl;
    }
    return 0;
}