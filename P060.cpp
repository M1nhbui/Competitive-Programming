#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	if (n == 2) {
		cout << 2;
		return 0;
	}

	if (n == 3) {
		cout << 3;
		return 0;
	}



	for (int i = n; i >= 2; i--) {
		int a = 0;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				a++;
				break;
			} 
		}
		if (a == 0){
			cout << i;
			return 0;
		}
	}
}