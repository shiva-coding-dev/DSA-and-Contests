#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
#define ll long long 

void solve(int n , vector<ll> a){
    for(int i =0 ; i < n-1; i++){
            if(abs(a[i] - a[i+1])<=1){
                cout<<0<<"\n";
                return;
            }
    }
        vector<ll> b;
        bool found = false;
        if(n!=2){
            for(int i =0 ; i < n; i++){
                for(int j = 0 ;j < n-1  ; j++){
                    if (j == i || j + 1 == i) continue;
                    else{
                        if ((min(a[j] , a[j+1]))<=a[i]-1) {
                            b.push_back(abs(i - j));
                            found = true;
                        }
                    }
                }
            }
            if(found){
                sort(b.begin() , b.end());
                cout<<b[0]<<"\n";
            }else{
                cout<<-1<<"\n";
            }
        }else{
            cout<<-1<<"\n";
        } 
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int i =0 ; i < n ; i++){
            cin>>a[i];
        }
        solve(n,a);
    }
    return 0;
}