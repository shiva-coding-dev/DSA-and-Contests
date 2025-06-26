#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int num = stoi(s);
        int found = -1;

        for (int i = 0; i <= 100; i++) {
            if (i * i == num) {
                found = i;
                break;
            }
        }
        if (found == -1)
            cout << "-1\n";
        else
            cout << "0 " << found << "\n";  // a = 0, b = found is always valid
    }
    return 0;
}
