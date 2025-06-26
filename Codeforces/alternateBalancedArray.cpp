#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if ((n / 2) % 2 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            vector<int> even, odd;
            int sum_even = 0, sum_odd = 0;

            for (int i = 1; i <= n / 2; ++i) {
                even.push_back(i * 2);
                sum_even += i * 2;
            }

            for (int i = 1; i < n / 2; ++i) {
                odd.push_back(i * 2 - 1);
                sum_odd += i * 2 - 1;
            }

            odd.push_back(sum_even - sum_odd); // Make sums equal

            for (int x : even) cout << x << " ";
            for (int x : odd) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}
