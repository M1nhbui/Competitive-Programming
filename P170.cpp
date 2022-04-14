#include <bits/stdc++.h>
using namespace std;
#define MAX 100

bool scp(int a)
{
    bool scp = true;
    double b = sqrt(a);
    if (b != round(b))
    {
        scp = false;
    }
    return scp;
}

int main()
{
    int n;
    cin >> n;
    if (scp(n))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}