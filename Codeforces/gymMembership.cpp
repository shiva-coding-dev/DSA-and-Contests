#include <iostream>
#include <cmath>
using namespace std;

void gym(int d, int x, int y) {
    if (y >= x) {
        cout << 0 << "\n";
        return;
    }

    int trials = 1;
    int coinsLeft = y;
    while (trials <= 1000) { // Add a reasonable limit to prevent infinite loop
        // Calculate discounted price using float to avoid truncation
        coinsLeft = coinsLeft-1;
        double discountedPrice = x * (1.0 - (d / 100.0) * trials);
        if (discountedPrice < 0) discountedPrice = 0; // Membership can't go negative

        if (coinsLeft >= discountedPrice) {
            cout << trials << "\n";
            return;
        }

        trials++;
    }

    // If not affordable even after many trials
    cout << -1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d, x, y;
        cin >> d >> x >> y;
        gym(d, x, y);
    }
    return 0;
}
