#include <iostream>
using namespace std;

int main()
{
	long long N;
	cin >> N;
	for (long long i = 0; i < N; i++)
	{
		long long no;
		cin >> no;
		if (i == 0)
		{
			cout << no << "\n";
		}
		if (i == N - 1)
		{
			cout << no;
		}
	}
}