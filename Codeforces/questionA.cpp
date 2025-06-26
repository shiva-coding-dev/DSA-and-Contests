#include <iostream>
using namespace std;
#define int long long
signed main() {
int t;
cin>>t;
while(t--)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int k=min(a,c);
    int l=min(b,d);
    if(k==l){
       cout<<"Gellyfish"<<endl;
    }else if(min(k,l)==k){
        cout<<"Flower"<<endl;
    }else cout<<"Gellyfish"<<endl;
}
}