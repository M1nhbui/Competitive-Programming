#include <bits/stdc++.h>
using namespace std;

int main()
{
	string n;
	cin >> n;
	int m = n.length() - 1;
	for (int i = 0; i <= m; i++)
	{
		cout << n.substr(0, i + 1) << "\n";
	}
	for (int i = m; i >= 0; i--)
	{
		cout << n.substr(0, i + 1) << "\n";
	}
}