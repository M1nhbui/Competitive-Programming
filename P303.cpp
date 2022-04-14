#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000

int KiemTraMangDoiXung(int a[], int n)
{
	for(int i = 0; i < n/2; i++)
	{
		if(a[i] != a[n - i - 1])
		{
			return -1;
			break;
		}
	}
	return 1;
}

int main()
{
    int n;
    cin >> n;
    int arr[MAX];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = true;
    if (KiemTraMangDoiXung(arr, n) == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}