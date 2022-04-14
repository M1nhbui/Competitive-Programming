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

long long fibthun(int x)
{
    ll sum = 0;
    int array[x];
    array[0] = 1;
    array[1] = 1;
    for (int i = 2; i <= x - 1; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
        sum += array[i];
    }
    return sum;
}

void code()
{
    int n;
    cin >> n;
    cout << fibthun(n + 1);
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