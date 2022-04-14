// #include <bits/stdc++.h>
// using namespace std;

// typedef pair<long long, long long> pll;
// typedef pair<int, int> pii;

// #define MAXN 900005
// #define MAX 100
// #define ll long long

// #define ll long long
// #define ull unsigned long long
// #define endl "\n"
// #define FOR(i, l, r) for (int i = l; i <= r; i++)
// #define FOD(i, r, l) for (int i = r; i >= l; i--)
// #define vecll vector<long long>
// #define pb push_back
// #define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"

// void read()
// {
//     // ios_base::sync_with_stdio(false);
//     // freopen("name.inp", "r", stdin);
//     // freopen("name.out", "w", stdout);
//     freopen(pathio "input.txt", "r", stdin);
//     freopen(pathio "output.txt", "w", stdout);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     return;
// }

// ll n;

// void solve(ll t, vecll a)
// {
//     ll cnt = 0;
//     while (a.size() != 0)
//     {
//         ll MX = 1e9;
//         ll index = lower_bound(a.begin(), a.end(), MX) - a.begin();
//         if (index > a.size())
//         {
//             index--;
//         }
//         if (index == a.size())
//         {
//             break;
//         }
//         else
//         {
//             a.erase(a.begin() + index, a.end());
//             cnt++;
//         }
//     }
//     if (cnt % 2 == 0)
//     {
//         cout << "ANDY";
//     }
//     else
//     {
//         cout << "BOB";
//     }
//     cout << endl;
// }

// int main()
// {
//     read();
//     cin >> n;
//     FOR(i, 1, n)
//     {
//         ll t;
//         cin >> t;
//         vecll a(t);
//         FOR(i, 0, t - 1)
//         {
//             cin >> a[i];
//         }
//         solve(t, a);
//     }
//     return 0;
// }

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

int main()
{
    read();
    ll n;
    cin >> n;
    FOR(i, 1, n)
    {
        ll t;
        cin >> t;
        vecll a(t);
        ll MX = 0;
        ll cnt = 0;
        FOR(i, 0, t - 1)
        {
            cin >> a[i];
            if (MX < a[i])
            {
                MX = a[i];
                cnt++;
            }
        }
        if (cnt % 2 == 0)
        {
            cout << "ANDY";
        }
        else
        {
            cout << "BOB";
        }
        cout << endl;
    }
    return 0;
}