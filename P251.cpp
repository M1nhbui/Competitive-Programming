#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    string x;
    getline(cin, x);
    int sotu = 1, socau = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] == ' ')
        {
            sotu++;
        }
        if (x[i] == '.' || x[i] == '!')
        {
            socau++;
        }
    }
    cout << sotu << " " << socau;
    return 0;
}