#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        if (x >= 15 && x % 14 >= 1 && x % 14 <= 6) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
