#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        int Min = x[0];
        int Max = x[n - 1];
        int minExtra = min(abs(s - Min), abs(s - Max));
        int steps = (Max - Min) + minExtra;

        cout << steps << '\n';
    }
    return 0;
}
