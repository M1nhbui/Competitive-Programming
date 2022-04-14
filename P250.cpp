#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    string x;
    getline(cin, x);
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < x.size(); i++)
    {
        if (i >= a - 1 && i <= b - 1)
        {
            continue;
        }
        else 
        {
            cout << x[i];
        }
    }
    return 0;
}