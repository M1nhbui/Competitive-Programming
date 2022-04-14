#include <bits/stdc++.h>

#define MAXN 100005
#define MAX 100
#define ll long long
#define ull unsigned long long
#define ldb long double
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
#define sp setprecision
#define pathio "D:/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void code()
{
    ll n, sum = 1;
    cin >> n;
    for (int i = 2; i <= n; i += 2)
    {
        sum *= i;
    }
    cout << sum;
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