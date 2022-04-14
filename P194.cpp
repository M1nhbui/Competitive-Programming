#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int n, m;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        if (i % n == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}