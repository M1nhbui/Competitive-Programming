#include <bits/stdc++.h>

using namespace std;

#define ll long long
int p[32];
int solve(int f, int x)
{
    if (x == p[f - 1])
        return 0;
    if (x > p[f - 1])
        return solve(f - 1, x - p[f - 1]);
    return 1 - solve(f - 1, p[f - 1] - x);
}

int main()
{
    int n, k;
    p[0] = 1;
    for (int i = 1; i <= 31; i++)
        p[i] = p[i - 1] * 2;
    while (cin >> n >> k)
    {
        if (n == 0 && k == 0)
            break;
        if (solve(n, k) == 0)
            cout << "D" << endl;
        else
            cout << "U" << endl;
    }
    return 0;
}