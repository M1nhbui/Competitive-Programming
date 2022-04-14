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
    freopen(pathio "input.txt", "r", stdin);
    freopen(pathio "output.txt", "w", stdout);
    cin.tie(NULL);
    cout.tie(NULL);
    // ios_base::sync_with_stdio(false);
    // freopen("name.inp", "r", stdin);
    // freopen("name.out", "w", stdout);
    return;
}

int main()
{
#define time
    read();
#ifdef time
    auto start_time = chrono::high_resolution_clock::now();
#endif
    ll n;
    cin >> n;
    cout << n;
#ifdef time
    auto end_time = chrono::high_resolution_clock::now();
    double time_delta = chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count();
    cout << "\n[" << time_delta << " ms]\n";
#endif
    return 0;
}