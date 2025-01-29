#include <bits/stdc++.h>

#define ll long long
#define fl float
#define ld long double

#define fi first
#define se second
#define pb push_back
#define pp_b pop_back

#define MAX 1000
#define pi 3.1415926535

#define vecll vector<ll>
#define pp pair<ll, ll>
#define pvg pair<pair<ll, ll>, ll>
#define pvl vector<pair<ll, ll>>
#define xd "\n"

#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define FOD(i, a, b) for (ll i = a; i >= b; i--)

const long long INF = 2000000000;
using namespace std;
void resizebignum(string &a, string &b)
{
	while (a.size() < b.size())
		a = '0' + a;
	while (b.size() < a.size())
		b = '0' + b;
}
bool ss(string a, string b)
{
	resizebignum(a, b);
	if (a >= b)
		return 1;
	else
		return 0;
}
string addbignum(string a, string b)
{
	if (a == b && a == "")
		return "0";
	string c = "";
	resizebignum(a, b);
	ll thua = 0;
	for (ll i = max(a.size(), b.size()) - 1; i >= 0; i--)
	{
		ll sum = a[i] + b[i] - '0' * 2 + thua;
		c = char(sum % 10 + '0') + c;
		thua = sum / 10;
	}
	if (thua > 0)
		c = "1" + c;
	return c;
}
string minuss(string a, string b)
{
	if (a == b)
		return "0";
	string c = "";
	resizebignum(a, b);
	ll muon = 0;
	for (ll i = a.size() - 1; i >= 0; i--)
	{
		ll pg = a[i] - b[i] - muon;
		if (pg < 0)
		{
			pg += 10;
			muon = 1;
		}
		else
			muon = 0;
		c = char(pg + '0') + c;
	}
	while (c[0] == '0' && c.size() > 1)
		c.erase(0, 1);
	return c;
}
string pn1(string a, ll b)
{
	string c = "";
	resizebignum(a, c);
	ll du = 0;
	for (ll i = a.size() - 1; i >= 0; i--)
	{
		ll pn = du + (a[i] - '0') * b;
		c[i] = char(pn % 10 + '0');
		du = pn / 10;
	}
	while (du > 0)
	{
		c = char((du % 10) + '0') + c;
		du /= 10;
	}
	return c;
}
string pn(string a, ll b)
{
	string c = "";
	for (ll i = 0; i < b; i++)
	{
		c = addbignum(c, a);
	}
	return c;
}
string pnsl(string a, string b)
{
	string c = "";
	string d = "";
	for (ll i = a.size() - 1; i >= 0; i--)
	{
		if (i != a.size() - 1)
		{
			d += "0";
		}
		string tmp = pn(b, a[i] - '0');
		tmp += d;
		c = addbignum(c, tmp);
	}
	return c;
}
string chia(string a, ll b)
{
	ll s;
	ll nho = 0;
	string c = "";
	for (ll i = 0; i < a.size(); i++)
	{
		nho = nho * 10 + (a[i] - 48);
		s = nho / b;
		nho = nho % b;
		c += char(s + '0');
	}
	while (c[0] == '0' && c.size() > 1)
	{
		c.erase(0, 1);
	}
	return c;
}
ll chia1(string a, ll b)
{
	ll nho = 0;
	for (ll i = 0; i < a.size(); i++)
		nho = (nho * 10 + (a[i] - 48)) % b;
	return nho;
}
int main()
{
	string a, b;
	cin >> a >> b;
	cout << pnsl(a, b);
}