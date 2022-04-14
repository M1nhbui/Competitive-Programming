#include <iostream>
using namespace std;

int main() {
	int N, M, A, B;
	cin >> N;
	A = N * N;
	B = N + 1;
	M = (A - B) + 1;
	cout << M;	
	return 0;
}