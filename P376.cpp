#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b, c;
    if (sqrt(a * a + b * b) < c)
        cout << "ACUTE";
    else if (sqrt(a * a + b * b) == c)
        cout << "RIGHT";
    else
        cout << "OBTUSE";
}