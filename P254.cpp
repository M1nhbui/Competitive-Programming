#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    string x;
    cin >> x;
    int n = x.size();
    char a;
    cin >> a;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == a)
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
    return 0;
}