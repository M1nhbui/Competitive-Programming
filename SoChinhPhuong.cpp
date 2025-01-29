#include <bits/stdc++.h>
#include <iostream>
using namespace std;

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
    cout << scp(n);
}