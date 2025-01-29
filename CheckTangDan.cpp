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

int ktra(int arr[], int n)
{
    if (n == 0)
        return 0;
    int t = ktra(arr, n - 1);
    if ((arr[n - 1] < arr[n] && (t == 0 || t == 1)) || (arr[n - 1] == arr[n] && t == 1))
        return 1;
    return 0;
}

void code()
{
    long long n, k;
    cin >> n;
    long long arr[MAX];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (k == 0)
        cout << "mang ko tang" << endl;
    else
        cout << "mang tang dan" << endl;
    return;
}

int main()
{
    freopen(lfi);
    freopen(lfo);
    cin.tie(0);
    cout.tie(0);

    code();

    fclose(stdin);
    fclose(stdout);
    return 0;
}