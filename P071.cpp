#include <bits/stdc++.h>

using namespace std;
int main() {
    long long n;
    cin >> n;
    long double a = sqrt(n);
    if (a  == round(a)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n;
//     cin >> n;
//     long long a = round(sqrt(n));
//     if (a*a==n) {
//         cout << "YES";
//         } else {
//             cout << "NO";
//         }
// }

// // Ep kieu trong cpp
// // float a = 10.5 // sso thuc
// // onlyInteger() // chi thao tac duoc voi int
// cout << (int)a; 10.9 -> 10

// float b = 10.00000;
// cout << b; => 10 => 

// printf("%d", (int)b); => 10.00000000

// // float => %f
// // int => %d

// int -> float
// long 
