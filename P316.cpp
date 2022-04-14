#include <iostream>
using namespace std;
int main()
{
    float x, n, s = 1;
    cin >> x >> n;
    for (int i = 1; i <= n; i++)
        s *= x;
    cout << s;
}