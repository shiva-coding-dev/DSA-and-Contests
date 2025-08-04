#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n , k ;
        cin>>n>>k;
        vector<int> a (n);
        for(int i = 0 ; i < n ; i ++)cin>>a[i];
        int m = k;
        int count  = 0;
        for(int i = 0 ; i< n ; i++){
            if(i != m){
                if(a[i] == 1){
                    break;
                }
            }else{
                m= m+k+1;
            }
        }
        cout<<count+1<<"\n";
    }
    return 0;
}