#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long mid = n / 2 + 1;
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            long long a;
            cin >> a;
            if (a == 1)
            {
                cout << (abs((mid - i)) + abs((mid - j)));
                return 0;
            }
        }
    }
}