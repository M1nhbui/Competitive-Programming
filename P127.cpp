#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int main()
{
    int a, b;
    cin >> a >> b;
    if ((a * b) % 10 == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}