#include <iostream>
using namespace std;

int main() {
    int n ; // height of the pyramid
    cin>>n;
    // Upper part
    for (int i = 0; i <= n; i++) {
        // Leading spaces
        for (int j = 0; j < n - i; j++) cout << "  ";

        // Increasing numbers
        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }

        // Decreasing numbers
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << endl;
    }

    // Lower part
    for (int i = n - 1; i >= 0; i--) {
        // Leading spaces
        for (int j = 0; j < n - i; j++) cout << "  ";

        // Increasing numbers
        for (int j = 0; j <= i; j++) {
            cout << j;
            if (j != i) cout << " ";
        }

        // Decreasing numbers
        for (int j = i - 1; j >= 0; j--) {
            cout << " " << j;
        }

        cout << endl;
    }

    return 0;
}
