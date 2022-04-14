#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (long long i = 0; i < n; i++)
    {
        long double a;
        cin >> a;
        if (a < 0 || a > 10)
            cout << "-1";
        else if (a >= 9)
            cout << "A+";
        else if (a >= 8)
            cout << "A";
        else if (a >= 7)
            cout << "B";
        else if (a >= 6)
            cout << "C";
        else if (a >= 5)
            cout << "D";
        else if (a < 5)
            cout << "E";
        cout << "\n";
    }
}