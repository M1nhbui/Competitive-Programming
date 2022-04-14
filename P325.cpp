#include <bits/stdc++.h>

#define MAX 100000
#define ll long long
#define ull unsigned long long
#define ldb long double
#define endl "\n"
#define sp setprecision
#define pathio "D:/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

bool check(ll n)
{
    bool flag = true;
    if (n % 5 == 1 && n % 2 == 0)
    {
        flag == true;
    }
    else
    {
        flag = false;
    }
    return flag;
}

void code()
{
    long long n, sum = 0;
    cin >> n;
    long long arr[MAX];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (check(arr[i]))
        {
            sum += arr[i];
        }
    }
    cout << sum;
    return;
}

int main()
{
    // freopen(lfi);
    // freopen(lfo);
    cin.tie(0);
    cout.tie(0);

    code();

    fclose(stdin);
    fclose(stdout);
    return 0;
}