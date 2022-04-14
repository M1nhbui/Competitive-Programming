// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	long long x, y, a, b;
// 	long long z = 1;
// 	long long c = 1;
// 	cin >> x >> y >> a >> b;

// 	for (long long i = 1; i <= y; i++)
// 	{
// 		z = z * x;
// 	}
// 	for (long long j = 1; j <= b; j++)
// 	{
// 		c = c * a;
// 	}
// 	if (y == 0)
// 	{
// 		z = 1;
// 	}
// 	if (b == 0)
// 	{
// 		c = 1;
// 	}
// 	cout << z + c;
// }

#include <bits/stdc++.h>
using namespace std;

long long pow(long long a, long long b)
{
    if (b == 0)
    {
        return 1;
    }
    else if (b == 1)
    {
        return a;
    }
    else if (b % 2 == 0)
    {
        long long x = pow(a, b / 2);
        return x * x;
    }
    else
    {
        long long x = pow(a, (b - 1) / 2);
        return x * x * a;
    }
}

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << pow(a, b) + pow(c, d);
}