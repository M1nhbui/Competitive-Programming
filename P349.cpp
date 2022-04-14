#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = 0;
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            m += a[j];
        }
        else
        {
            m -= a[j];
        }
    }
    cout << m;
    return 0;
}