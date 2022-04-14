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

void code()
{
    ll n, x, arr[MAX], count = 0;
    cin >> n >> x;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (x == arr[i])
        {
            count++;
        }
    }
    cout << count;

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