#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n;
        cin>>n;
        string s;
        cin >> s;

        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        bool found = false;
        for (int i = 1; i < n - 1; i++) {
            if (freq[s[i]] > 1) {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
