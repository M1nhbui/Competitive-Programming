#include <bits/stdc++.h>
using namespace std;
#define MAX 100000

int main()
{
    char x[MAX];
    cin.getline(x, MAX);
    int n = strlen(x);
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++)
    {
        if (i >= a - 1 && i <= b - 1)
        {
            if (x[i] >= 65 && x[i] <= 90)
            {
                x[i] += 32;
            }
            else if (x[i] >= 97 && x[i] <= 122)
            {
                x[i] -= 32;
            }
        }
    }
    cout << x;
    return 0;
}