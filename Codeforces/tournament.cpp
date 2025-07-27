#include <bits/stdc++.h>
using namespace std;
#define ll long long 
/*
n j k 
atleast n-k pair should be present then true
else 
k = 2
5 3 4 5 2

*/
void solve(int n,int j, int k , vector<int> a){
    int greatest = 0;
    for(int i =0;i<n;i++){
        greatest = max(greatest , a[i]);
    }
    if(a[j-1] == greatest && k == 1){
        cout<<"YES\n";
        return;
    }
    if(k==1&& a[j-1]!=greatest)cout<<"NO\n";
    else cout<<"YES\n";
}   
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        ll n,j,k;
        cin>>n>>j>>k;
        vector<int> a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        solve(n,j,k,a);
    
    }
    return 0;
}