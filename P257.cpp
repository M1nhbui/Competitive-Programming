#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int main()
{
    char x[MAX];
    cin.getline(x, MAX);
    int n = strlen(x);
    for (int i = 0; i < n; i++)
    {
        if (x[i] >= 65 && x[i] <= 90)
        {
            cout << 0;
        }
        if (x[i] >= 97 && x[i] <= 122)
        {
            cout << 1;
        }
    }
    return 0;
}