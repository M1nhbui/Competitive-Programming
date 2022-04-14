#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (abs(a - b) == abs(c) || abs(b - c) == abs(a) || abs(c - a) == abs(b))
    {
        cout << '-';
    }
    else
    {
        cout << 0;
    }
}