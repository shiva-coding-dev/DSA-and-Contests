#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(ll n, vector<int> a) {
    map<int ,int> mp;
    int mn = INT_MAX;
    for(int i = 0 ; i< n;i++){
        if(a[i]<mn){
            mn  = a[i];
            mp[a[i]] = 1;
        }
    }

    int mx = INT_MIN;
    for(int i = n-1 ; i>=0;i--){
        if(a[i]>mx){
            mx  = a[i];
            mp[a[i]] = 1;
        }
    }

    for(auto &x: a)cout<<mp[x];
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<int> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        solve(n, a);
    }
    return 0;
}
