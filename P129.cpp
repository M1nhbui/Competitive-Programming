#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int soChuSo(int n, int count)
{
    count = 0;
    for (int i = 1; i <= MAX; i++)
    {
        n /= 10;
        if (n > 0)
        {
            count++;
        }
        if (n <= 0)
        {
            count++;
            break;
        }
    }
    return count;
}

void check(int n, int count)
{
    bool flag = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Bad";
            return;
        }
    }
    if (!flag)
    {
        cout << "Good"
             << endl << count;
    }
}

int main()
{
    int n;
    cin >> n;
    if (n == 2 || n == 3)
    {
        cout << "Good"
             << endl << 1;
        return 0;
    }
    int count = soChuSo(n, count);
    check(n, count);
}