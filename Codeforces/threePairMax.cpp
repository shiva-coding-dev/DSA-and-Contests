#include <iostream>
using namespace std;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    if (x == y && z <= x) {
        cout << "YES\n";
        cout << z << " " << x << " " << z << "\n";
    } else if (x == z && y <= x) {
        cout << "YES\n";
        cout << y << " " << x << " " << y << "\n";
    } else if (y == z && x <= y) {
        cout << "YES\n";
        cout << x << " " << x << " " << y << "\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
