#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n ;
        cin>> n;
        vector<int> a(n);
        for(auto &x:a)cin>>x;
        vector<int> b(n);
        for(auto &x:b)cin>>x;
        int count = 0;
        for(int i = 0; i < n ; i++){
            if(a[i]>=b[i]){
                int temp = (a[i]-b[i]);
                count+=temp;
            }
        }
        cout<<count+1<<"\n";
    }
    return 0;
}