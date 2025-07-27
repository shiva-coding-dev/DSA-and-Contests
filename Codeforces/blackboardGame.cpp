#include <bits/stdc++.h>
using namespace std;

// (a+b-3)%4 == 0

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n;
        cin>>n;
        if(n%4==0)cout<<"Bob\n";
        else cout<<"Alice\n";
    }
    return 0;
}