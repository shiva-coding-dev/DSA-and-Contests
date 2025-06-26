#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> >  a(n, vector<int>(m));

        int Max = 0;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m; j++) {
                cin >> a[i][j];
                Max = max(Max, a[i][j]);
            }
        }

        // Collect rows and columns where Max appears
        set<int> rowsWithMax;
        set<int> colsWithMax;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m; j++) {
                if(a[i][j] == Max) {
                    rowsWithMax.insert(i);
                    colsWithMax.insert(j);
                }
            }
        }

        // If all max elements are in a single row or a single column
        if(rowsWithMax.size() == 1 || colsWithMax.size() == 1) {
            cout << Max - 1 << "\n";
        } else {
            cout << Max << "\n";
        }
    }

    return 0;
}
