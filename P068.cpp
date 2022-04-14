// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ll n;
//     cin >> n;
//     ll res = 1;
//     ll count2 = 0;
//     ll count5 = 0;
//     for (ll i = 2; i <= n; i++)
//     {
//         ll k = i;
//         while (k % 2 == 0)
//         {
//             count2++;
//             k /= 2;
//         }
//         while (k % 5 == 0)
//         {
//             count5++;
//             k /= 5;
//         }
//         res = (res * k) % 10;
//     }

//     ll d = count2 - count5;
//     if (d == 0)
//     {
//         cout << res;
//         return 0;
//     }
//     if (d % 4 == 1)
//     {
//         cout << (res * 2) % 10;
//         return 0;
//     }
//     if (d % 4 == 2)
//     {
//         cout << (res * 4) % 10;
//         return 0;
//     }
//     if (d % 4 == 3)
//     {
//         cout << (res * 8) % 10;
//         return 0;
//     }
//     if (d % 4 == 0)
//     {
//         cout << (res * 6) % 10;
//         return 0;
//     }
// }

#include <iostream>
int n;
int d[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
using namespace std;
int lastdigit(int n)
{
    if (n < 10)
        return d[n];
    int cs;
    if (((n / 10) % 10) % 2 == 0)
        cs = 6 * lastdigit(n / 5) * d[n % 10] % 10;
    else
        cs = 4 * d[n % 10] * lastdigit(n / 5) % 10;
    return cs;
}
int main()
{
    cin >> n;
    cout << lastdigit(n) << endl;
}