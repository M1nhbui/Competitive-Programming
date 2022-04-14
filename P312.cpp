#include <bits/stdc++.h>
#define MAX 100000
#define ll long long
#define ld long double
#define endl "\n"
#define pathio "D:/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void solve()
{
    int x;
    cin >> x;
    cout << Fibonacci(x);
    return;
}

int main()
{
    freopen(lfi);
    freopen(lfo);
    cin.tie(0);
    cout.tie(0);

    solve();

    fclose(stdin);
    fclose(stdout);
    return 0;
}