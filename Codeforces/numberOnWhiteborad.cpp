#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << 2 << endl;
        int a = n;
        int b = n - 1;
        int x = ceil((a + b) / 2.0);
        cout << a << " " << b << endl;
        for (int i = n - 2; i >= 1; --i) {
            cout << x << " " << i << endl;
            x = ceil((x + i) / 2.0);
        }
    }

    return 0;
}
