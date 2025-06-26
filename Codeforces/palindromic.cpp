#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int count0 = count(s.begin(), s.end(), '0');
    int count1 = n - count0;
    
    int total_pairs = n / 2;
    if (k > total_pairs) {
        cout << "NO" << endl;
        return;
    }
    
    // Special case: All pairs must be good
    if (k == total_pairs) {
        if (count0 == n || count1 == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        return;
    }
    
    // If all characters are the same, we can't have fewer than total_pairs good pairs
    if (count0 == n || count1 == n) {
        cout << "NO" << endl;
        return;
    }
    
    // General case
    bool possible = false;
    
    // Option 1: Use '0's for good pairs
    if (count0 >= 2 * k) {
        int remaining0 = count0 - 2 * k;
        int remaining1 = count1;
        if (remaining0 + remaining1 >= 2 * (total_pairs - k) && 
            remaining0 >= 0 && remaining1 >= 0) {
            possible = true;
        }
    }
    
    // Option 2: Use '1's for good pairs
    if (count1 >= 2 * k) {
        int remaining1 = count1 - 2 * k;
        int remaining0 = count0;
        if (remaining0 + remaining1 >= 2 * (total_pairs - k) && 
            remaining0 >= 0 && remaining1 >= 0) {
            possible = true;
        }
    }
    
    // Option 3: Mix '0's and '1's for good pairs
    if (count0 >= k && count1 >= k) {
        int remaining0 = count0 - k;
        int remaining1 = count1 - k;
        if (remaining0 + remaining1 >= 2 * (total_pairs - k) && 
            remaining0 >= 0 && remaining1 >= 0) {
            possible = true;
        }
    }
    
    cout << (possible ? "YES" : "NO") << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}