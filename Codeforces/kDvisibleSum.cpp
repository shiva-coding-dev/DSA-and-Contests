#include <iostream>
#include <numeric> // for gcd
using namespace std;
#define ll long long 
ll solve(ll n, ll k) {
    ll x = (n + k - 1) / k;  
    ll totalSum = x * k;
    return (totalSum + n - 1) / n;  
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) << "\n";
    }
    return 0;
}
