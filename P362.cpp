#include <bits/stdc++.h>
using namespace std;

void luyThua(int &a, int n)
{
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        x *= a;
    }
    a = x;
}

int main()
{
    int a, n, mod;
    cin >> a >> n >> mod;
    luyThua(a, n);
    // cout << a;
    cout << a % mod;
}