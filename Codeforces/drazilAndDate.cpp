#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
#define ll long long 
int main() {
    ll a , b , s;
    cin>>a>>b>>s;
    ll d = abs(a)+abs(b);
    if((s>=d)&&((s-d)%2 == 0)){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}