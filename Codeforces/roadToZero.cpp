#include <iostream>
#include <cmath>
using namespace std;
#define ll long long 

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll operate ;
        if((2*a)>=b)operate = b;
        else operate = 2*a;
        ll money ;
        ll Min = min(abs(x) , abs(y));
        ll rest;
        if(Min == abs(x))rest = abs(y);
        else rest = abs(x);

        if((a*b)>0){
            ll minMoney = min(abs(x) , abs(y));
            ll firstMoney = minMoney * operate;
            ll restMoney = abs(abs(x)-abs(y))*a;
            money = firstMoney+restMoney;
        }else {
            money = min(((Min+(rest))*a) , ((Min*b)+(a*rest)));
        }
        cout<<money<<"\n";
    }
    return 0;
}