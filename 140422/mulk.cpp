#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100
#define ll long long

#define ll long long
#define ull unsigned long long
#define endl "\n"
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define FOD(i, r, l) for (int i = r; i >= l; i--)
#define vecll vector<long long>
#define pb push_back
#define pathio "C:/Users/buile/OneDrive/Code/C++/InputOutput/"

void read()
{
    // ios_base::sync_with_stdio(false);
    // freopen("name.inp", "r", stdin);
    // freopen("name.out", "w", stdout);
    freopen(pathio "input.txt", "r", stdin);
    freopen(pathio "output.txt", "w", stdout);
    cin.tie(NULL);
    cout.tie(NULL);
    return;
}

ll n, k;

int main()
{
    read();
    cin >> n >> k;
    if (k == 0 || n == 0)
    {
    	cout << 0;
    	return 0;
    }
    if (k % 2 == 1)
    {
    	cout << (n / k) * (n / k) * (n / k);
    }
    else
    {
    	if (n >= (k / 2))
    	{
    		cout << ((n / k) * (n / k) * (n / k)) + (((n - (k / 2)) / k + 1) * ((n - (k / 2)) / k + 1) * ((n - (k / 2)) / k + 1));
    	}
   		else
   		{
   			cout << (n / k) * (n / k) * (n / k);
   		} 	
    }
    return 0;
}