#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 300005
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

bool snt[MAXN];

void eratosthenes()
{
    FOR(i, 2, MAXN)
    {
        snt[i] = true;
    }
    FOR(i, 2, sqrt(MAXN))
    {
        if (snt[i] == true)
        {
            for (int j = i * i; j <= MAXN; j += i)
            {
                snt[j] = false;
            }
        }
    }
}

int main()
{
    read();
    int a, b;
    eratosthenes();
    cin >> a >> b;
    FOR(i, a, b)
    {
        if (snt[i])
        {
            cout << i << endl;
        }
    }
    return 0;
}