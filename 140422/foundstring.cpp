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

string a, b;
queue<int> s;

int main()
{
    read();
    cin >> a >> b;
    // a = " " + a;
    // b = " " + b;
    ll n = a.size();
    FOR(i, 0, b.size() - 1)
    {
    	if (b[i] == a[0])
   		if (b.substr(i, n) == a)
   		{
    		s.push(i);
    	}
    }
    cout << s.size() << endl;
    while(!s.empty())
    {
    	cout << s.front() + 1 << " ";
    	s.pop();
    }
    // string c = "abcd";
    // cout << c.substr(0, 4);\
    // abcde
    return 0;
}