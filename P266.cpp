#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int main()
{
    int n, x[MAX];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (long long i = 0; i < round(n / 2); i++)
    {
        if (x[i] != x[n - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}