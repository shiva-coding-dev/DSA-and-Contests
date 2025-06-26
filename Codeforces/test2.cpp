#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // Faster I/O
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p0(n), q0(n);
        for (int i = 0; i < n; i++) cin >> p0[i];
        for (int i = 0; i < n; i++) cin >> q0[i];

        // Precompute powers of 2
        vector<long long> P(n), Q(n);
        for (int i = 0; i < n; i++) {
            P[i] = 1LL << p0[i];
            Q[i] = 1LL << q0[i];
        }

        vector<long long> res(n);
        for (int i = 0; i < n; i++) {
            long long max_val = 0;
            for (int j = 0; j <= i; j++) {
                max_val = max(max_val, P[j] + Q[i - j]);
            }
            res[i] = max_val;
        }

        for (auto x : res) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
