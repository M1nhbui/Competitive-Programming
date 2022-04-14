#include <bits/stdc++.h>
#define MAX 100000
#define ll long long
#define unsigned long long ull
#define ld long double
#define endl "\n"
#define pathio "D:/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void code()
{
    ll a, b;
    cin >> a >> b;
    cout << gcd(a, b);
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