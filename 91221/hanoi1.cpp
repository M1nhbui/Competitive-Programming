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

int cnt = 0;
int n, k;
int a[4];

void xep(int n, int x, int y)
{
    if (n == 1)
    {
        cnt++;
        if (cnt > k)
        {
            return;
        }
        a[x]--;
        a[y]++;
    }
    else
    {
        xep(n - 1, x, 6 - x - y);
        xep(1, x, y);
        xep(n - 1, 6 - x - y, y);
    }
}

int main()
{
    read();
    cin >> n >> k;
    a[1] = n;
    a[2] = 0;
    a[3] = 0;
    int x = 1, y = 2;
    xep(n, x, y);
    cout << a[1] << " " << a[2] << " " << a[3];
}