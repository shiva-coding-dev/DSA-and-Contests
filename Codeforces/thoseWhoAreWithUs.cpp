#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> a(n, vector<int>(m));
        vector<int> rowMax(n, 0), colMax(m, 0);

        int Max = a[0][0];

        // Input and find Max
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                Max = max(Max, a[i][j]);
            }
        }

        // Count Max in each row and column
        int maxCount = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == Max) {
                    rowMax[i]++;
                    colMax[j]++;
                    maxCount++;
                }
            }
        }

        // Check if any (i, j) has full Max coverage
        bool found = false;
        for (int i = 0; i < n && !found; i++) {
            for (int j = 0; j < m && !found; j++) {
                int total = rowMax[i] + colMax[j];
                if (a[i][j] == Max)
                    total--; // avoid double-counting a[i][j]
                if (total == maxCount)
                    found = true;
            }
        }

        cout << (found ? Max - 1 : Max) << "\n";
    }

    return 0;
}
