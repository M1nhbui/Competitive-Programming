#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    string x;
    cin >> x;
    bool flag = true;
    int n = x.size();
    for (int i = 0; i <= n / 2; i++)
    {
        if (x[i] != x[n - i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
