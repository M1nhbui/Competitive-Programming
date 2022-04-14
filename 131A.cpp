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

int main()
{
    read();
    string s;
    cin >> s;
    bool check = false;
    if (s[0] == tolower(s[0]))
    {
	    FOR(i, 1, s.size() - 1)
	    {
	    	if (s[i] == toupper(s[i]))
	    	{
	    		continue;
	    	}
	    	check = true;
	    	break;
	    }
	}
	else
	{
		FOR(i, 0, s.size() - 1)
		{
			if (s[i] != toupper(s[i]))
			{
				check = true;
				break;
			}
		}
	}
	if (!check)
	{
		FOR(i, 0, s.size() - 1)
		{
			if (s[i] == toupper(s[i]))
				s[i] = tolower(s[i]);
			else
			{
				s[i] = toupper(s[i]);
			}
		}
		cout << s;
	}
	else
	{
		cout << s;
	}
    return 0;
}