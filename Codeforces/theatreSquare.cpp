#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
typedef long long ll;
void rec(ll n , ll m, ll a ){
    ll answer = 0;
    if(n%a == 0 && m%a == 0){
        answer = (n*m)/pow(a,2); 
        cout<<answer<<"\n";
        return;  
    }
    if(n<a && m<a){
        answer = 1;
        cout<<answer<<"\n";
        return;
    }
    if((n>a &&m<a) ||(m>a&&n<a)){
        answer = (max(n,m)+a-1)/a;
    }else{
        answer = ((n+a-1)/a)*((m+a-1)/a);
    }
    cout<<answer<<"\n";
}
int main(){
    ll n,m,a;
    cin>>n>>m>>a;
    rec(n,m,a);
    return 0;
}