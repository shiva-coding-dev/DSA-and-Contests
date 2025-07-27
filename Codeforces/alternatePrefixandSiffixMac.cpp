#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<int> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    vector<int> prefixMax(n), suffixMin(n);

    // Build prefixMax
    prefixMax[0] = a[0];
    for (ll i = 1; i < n; i++) {
        prefixMax[i] = max(prefixMax[i - 1], a[i]);
    }

    // Build suffixMin
    suffixMin[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--) {
        suffixMin[i] = min(suffixMin[i + 1], a[i]);
    }

    // Final answer
    for (ll i = 0; i < n; i++) {
        if (prefixMax[i] <= a[i] && suffixMin[i] >= a[i])
            cout << '1';
        else
            cout << '0';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
