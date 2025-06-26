#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long 

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool close_pair_found = false;
        for (int i = 0; i < n - 1; i++) {
            if (abs(a[i] - a[i + 1]) <= 1) {
                close_pair_found = true;
                break;
            }
        }

        if (close_pair_found) {
            cout << 0 << "\n";
            continue;
        }

        vector<ll> b;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (j == i || j + 1 == i) continue;

                if (a[j] == a[i] || a[j] == a[i] + 1 || a[j] == a[i] - 1 ||
                    a[j + 1] == a[i] || a[j + 1] == a[i] + 1 || a[j + 1] == a[i] - 1) {
                    b.push_back(abs(i - j));
                }
            }
        }

        if (b.empty()) {
            cout << -1 << "\n";
        } else {
            sort(b.begin(), b.end());
            cout << b[0] << "\n";
        }
    }
    return 0;
}
