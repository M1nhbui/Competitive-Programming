#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int a, b;
    cin >> a >> b;
    if (a * b == 0)
    {
        cout << "%";
        return 0;
    }
    if (a % b == 0 || b % a == 0)
    {
        cout << "%";
    }
    else
    {
        cout << 0;
    }
    return 0;
}