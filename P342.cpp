#include <bits/stdc++.h>

#define MAX 100000
#define ll long long
#define ull unsigned long long
#define ldb long double
#define endl "\n"
#define sp setprecision
#define pathio "D:/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

long long giaithua(long long n)
{
    if (n == 1)
        return n;
    return n * giaithua(n - 2);
}

void code()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << giaithua(n - 1);
    }
    else
    {
        cout << giaithua(n);
    }
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