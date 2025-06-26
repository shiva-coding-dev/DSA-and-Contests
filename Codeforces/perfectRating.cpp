#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i] / 2; 
        sum += b[i];
    }

    int i = 0;
    while (sum != 0 && i < n) {
        if (a[i] % 2 != 0) {
            if (sum > 0 && a[i] < 0) {
                b[i]--;
                sum--;
            } else if (sum < 0 && a[i] > 0) {
                b[i]++;
                sum++;
            }
        }
        i++;
    }

    for (int num : b) {
        cout << num << "\n";
    }

    return 0;
}