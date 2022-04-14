#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int main()
{
    string x;
    cin >> x;
    int n = x.size();
    int m;
    cin >> m;
    int a[MAX];
    char b;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        cin >> b;
        if (x[a[i]-1] == b)
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    return 0;
}