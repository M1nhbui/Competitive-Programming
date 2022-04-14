#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if (x == 27)
        {
            cout << ' ';
        }
        else
        {
            cout << char(x - 1 + 'a');
        }
    }
}