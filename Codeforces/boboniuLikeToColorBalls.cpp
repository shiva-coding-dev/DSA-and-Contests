#include <iostream>
using namespace std;

int countOdd(int r, int g, int b, int w) {
    return (r % 2) + (g % 2) + (b % 2) + (w % 2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int r, g, b, w;
        cin >> r >> g >> b >> w;

        // Case 1: Check current parity
        if (countOdd(r, g, b, w) <= 1) {
            cout << "Yes\n";
        }
        // Case 2: Try operation if r, g, b ≥ 1
        else if (r > 0 && g > 0 && b > 0) {
            r--; g--; b--;
            w += 3;
            if (countOdd(r, g, b, w) <= 1)
                cout << "Yes\n";
            else
                cout << "No\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
