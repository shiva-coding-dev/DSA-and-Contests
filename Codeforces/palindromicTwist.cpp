#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void palindrome( int n ,string s){
    for(int i = n/2 ;i<n;i++){
        if((s[i]+1 != s[n-i-1]+1) && (s[i]+1 != s[n-i-1]-1) && (s[i]-1 != s[n-i-1]+1) && (s[i]-1 != s[n-i-1]-1)){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n ;
        cin>>n;
        string s;
        cin>>s;
        palindrome(n,s);
    }
    return 0;
}