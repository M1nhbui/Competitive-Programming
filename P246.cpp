#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define endl "\n"

int main()
{
    string x, y;
    cin >> x;
    cin >> y;
    int n = x.size(), m = y.size();
    int z;
    cin >> z;
    for (int i = 0; i < z; i++)
    {
        int a;
        cin >> a;
        if (a > n || a > m)
        {
            cout << "No"
                 << "\n";
        }
        else
        {
            if (x[a - 1] == y[a - 1])
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}