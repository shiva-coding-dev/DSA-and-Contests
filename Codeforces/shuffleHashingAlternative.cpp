#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(const string &p, const string &h) {
    int p_len = p.size();
    int h_len = h.size();
    
    if (h_len < p_len) return false;
    
    vector<int> p_count(26, 0);
    for (char c : p) {
        p_count[c - 'a']++;
    }
    
    vector<int> h_window(26, 0);
    for (int i = 0; i < p_len; ++i) {
        h_window[h[i] - 'a']++;
    }
    
    if (h_window == p_count) return true;
    
    for (int i = p_len; i < h_len; ++i) {
        h_window[h[i - p_len] - 'a']--;
        h_window[h[i] - 'a']++;
        if (h_window == p_count) return true;
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string p, h;
        cin >> p >> h;
        
        if (isPossible(p, h)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}