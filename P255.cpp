#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    string x;
    getline (cin, x);
    int n = x.size();
    int countt = 0, counts = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 's' || x[i] == 'S')
        {
            counts++;
        }
        if (x[i] == 't' || x[i] == 'T')
        {
            countt++;
        }
    }
    if (countt > counts)
    {
        cout << "English";
    }
    else
    {
        cout << "France";
    }
    return 0;
}