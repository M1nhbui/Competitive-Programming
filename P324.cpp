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

bool ktra(ll arr[], ll n)
{
    bool check = true;
    for (ll i = 0; i < n - 1; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            check = false;
            return check;
        }
    }
    return check;
}

void code()
{
    long long n;
    cin >> n;
    long long arr[MAX];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (!ktra(arr, n))
        cout << "NO";
    else
        cout << "YES";
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