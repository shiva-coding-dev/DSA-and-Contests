#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s ;
        cin>>s;
        vector<int> a ;
        for(int i = 0 ; i < s.length() ; i++){
            a.push_back(s[i]-'0');
        }
        sort(a.begin() , a.end());
        cout<<a[0]<<"\n";
    }
    return 0;
}