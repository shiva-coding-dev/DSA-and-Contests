#include <iostream>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
# include<string>

void hashing(const string &p , const string &q){
    int freq1[26] = {0};
    for (char c : p) freq1[c - 'a']++;
    for(int i = 0 ;i<=q.length()-p.length(); i++){
    int freq2[26] = {0};
        for(int j=0 ; j<p.length();j++){
            freq2[q[i + j] - 'a']++;
        }bool match = true;
        for (int k = 0; k < 26; ++k) {
            if (freq1[k] != freq2[k]) {
                match = false;
                break;
            }
        }
        if (match) {
            cout << "YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string p,q;
        cin>>p>>q;
        hashing(p,q);
    }
    return 0;
}