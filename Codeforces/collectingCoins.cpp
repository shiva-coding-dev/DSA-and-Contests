#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

void coins (int a, int b, int c, int n){
    int mx = max(a,max(b,c));
    int needCoins = abs(mx - a)+abs(mx-b)+abs(mx-c);

    if(needCoins == n){
        cout<<"YES\n";
    }else if(needCoins >n){
        cout<<"NO\n";   
    }else{
        int extraCoins = abs(needCoins - n);
        if(extraCoins%3 == 0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int a, b, c, n;
        cin>>a>>b>>c>>n;
        coins(a,b,c,n);
    }
    return 0;
}