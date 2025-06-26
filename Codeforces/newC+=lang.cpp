#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void newLanguage(int a , int  b, int  n){
    int count = 1;
    if(a<b){
        while(a<=n && b<=n){
            a+=b;
            if(a>n){
                break;
            }else count++;
            b+=a;
            if(b>n){
                break;
            }else count++;
            
        }
    }else{
        while(a<=n && b<=n){
            b+=a;
            if(b>n){
                break;
            }else count++;
            a+=b;
            if(a>n){
                break;
            }else count++;
            
        }
    }
   
    cout<<count<<"\n";
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        newLanguage(a,b,n);
    }
    return 0;
}