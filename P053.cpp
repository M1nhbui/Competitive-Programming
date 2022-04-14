#include<bits/stdc++.h>
using namespace std;

int main() {
	float a;
	cin >> a;
	cout << fixed << setprecision(2) << sqrt(a*a + a*a);
}



#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float n;
    cin >> n;    
    cout << setprecision(2) << fixed;
    if(5574 >=n && n > 5573)
        cout << 1.4142127 * n;
    else
        cout << 1.4142132 * n;
}