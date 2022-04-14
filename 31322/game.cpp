#include <bits/stdc++.h>
using namespace std;

typedef pair<long long, long long> pll;
typedef pair<int, int> pii;

#define MAXN 900005
#define MAX 100
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

bool sosanh(string a, string b)
{
	while (a.size() != b.size())
	{
		if (a.size() > b.size())
			b = "0" + b;
		else
			a = "0" + a;
	}
	if (a < b)
		return true;
	else
		return false;
}

int main()
{
	read();
	ll n;
	cin >> n;
	while (n--)
	{
		map<ll, ll> x;
		string a;
		string lon = "0";
		cin >> a;
		for (int i = 0; i < a.size(); i++)
			x[a[i] - 48]++;
		for (char c = '0'; c <= '9'; c++)
		{
			if (x[c - 48] != 0)
			{
				string d = "";
				for (int i = 0; i < a.size(); i++)
					if (a[i] != c)
						d += a[i];
				while (d[0] == '0')
					d.erase(0, 1);
				if (sosanh(lon, d))
					lon = d;
			}
		}
		cout << lon << endl;
	}
}