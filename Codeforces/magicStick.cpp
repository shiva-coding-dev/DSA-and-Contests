#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
typedef long long ll;
void solve(ll x, ll y){
    if(x==1 && y>1){
        cout<<"NO\n";
    }else if (x <=3 && y >3){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
    } 
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        ll  x , y ;
        cin>>x>>y;
        solve(x , y);

    }
    return 0;
}