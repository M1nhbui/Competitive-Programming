#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;
#define MAXN 900005
#define MAX 100
#define ll long long
#define ull unsigned long long
#define ldb long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define endl "\n"
#define sp setprecision
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define vecldb vector<long double>
#define vecpll vector<pair<long long, long long>>
#define vecpldb vector<pair<long double, long double>>
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"
#define lfi pathio "input.txt", "r", stdin
#define lfo pathio "output.txt", "w", stdout

// bool check[100000];
// // int num[10005];
// void snt()
// {
//     for (ll i = 2; i <= 100000; i++)
//     {
//         check[i] = true;
//     }
//     for (ll i = 2; i * i <= 100000; i++)
//     {
//         if (check[i] == true)
//         {
//             for (ll j = 2 * i; j <= 100000; j += i)
//             {
//                 check[j] = false;
//             }
//         }
//     }
//     check[1] = false;
// }

bool prime(int n)
{
	if (n < 2)
	{
		return false;
	}
	if (n == 2 || n == 3)
	{
		return true;
	}
	bool prime = true;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}

void code()
{
    string s;
    cin >> s;
    ll max = 0;
    FOR(i, 0, s.size() - 1)
    {
        int j = i;
        int v = 0;
        while (j < s.size() - 1)
        {
            if (s[j] < '0' || s[j] > '9')
            {
                break;
            }
            v = v * 10 + (s[j] - '0');
            if (prime(v))
            {
                if (v > max)
                {
                    max = v;
                }
            }
            j++;
        }
    }
    cout << max;
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
// ██████╗░██╗░░░██╗██╗  ██╗░░░░░███████╗  ███╗░░░███╗██╗███╗░░██╗██╗░░██╗
// ██╔══██╗██║░░░██║██║  ██║░░░░░██╔════╝  ████╗░████║██║████╗░██║██║░░██║
// ██████╦╝██║░░░██║██║  ██║░░░░░█████╗░░  ██╔████╔██║██║██╔██╗██║███████║
// ██╔══██╗██║░░░██║██║  ██║░░░░░██╔══╝░░  ██║╚██╔╝██║██║██║╚████║██╔══██║
// ██████╦╝╚██████╔╝██║  ███████╗███████╗  ██║░╚═╝░██║██║██║░╚███║██║░░██║
// ╚═════╝░░╚═════╝░╚═╝  ╚══════╝╚══════╝  ╚═╝░░░░░╚═╝╚═╝╚═╝░░╚══╝╚═╝░░╚═╝