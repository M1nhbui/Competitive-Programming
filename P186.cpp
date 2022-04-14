#include <iostream>
using namespace std;

int main()
{
    long long a, b;
    char x;
    cin >> a >> b >> x;
    for (long long i = 0; i < a; i++)
    {
        for (long long j = 0; j < b; j++)
        {
            cout << x;
        }
        cout << "\n";
    }
}