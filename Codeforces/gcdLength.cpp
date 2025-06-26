#include <iostream>
#include <cmath>
using namespace std;

// Function to compute power of 10
long long pow10(int exp) {
    long long res = 1;
    while (exp--) res *= 10;
    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        long long g = pow10(c - 1);  // any number with c digits (e.g. 100...0)

        long long x = g * pow10(a - c); // e.g. g * 10^(a-c) to make a-digit number
        long long y = g * (pow10(b - c) + 1); // pick co-prime with x/g to ensure gcd(x,y) = g

        cout << x << " " << y << "\n";
    }

    return 0;
}
