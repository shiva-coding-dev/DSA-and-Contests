#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n ;
        cin>>n;
        vector<int> a;
        for(int i =0; i<n ; i++){
            if(n%2 ==0 ){
                if(i%2 == 0){
                    a.push_back(-1);
                }
                else if(i== n-1)a.push_back(2);
                else a.push_back(3);
            }else{
               if(i%2 == 0){
                    a.push_back(-1);
                } 
                else a.push_back(3);
            }
        }
    for(auto x:a)cout<<x<<" ";
    cout<<endl;
    }
    return 0;
}