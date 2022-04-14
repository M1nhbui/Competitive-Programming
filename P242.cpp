#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    string x;
    cin >> x;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] > '9')
        {
            cout << x[i];
        }
    }
    return 0;
}