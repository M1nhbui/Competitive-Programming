#include <bits/stdc++.h>

#define MAXN 10000
#define MAX 100
#define ll long long
#define ull unsigned long long
#define ldb long double
#define pll pair<long long, long long>;
#define pii pair<int, int>;
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
#define sp setprecision
#define FOR(i, l, r) for (int i = l; i < r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define pathio "D:/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

using namespace std;

void code()
{
    string str1, str2, str3 = "";
    cin >> str1 >> str2;
    FOR(i, 0, str1.size())
    {
        FOR(j, 0, str2.size())
        {
            if (str1[i] == str2[j])
            {
                bool flag = true;
                FOR(k, 0, str3.size())
                {
                    if (str1[i] == str3[k])
                    {
                        flag = false;
                    }
                }
                if (flag)
                {
                    str3 += str1[i];
                }
            }
        }
    }
    cout << str3.size();
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