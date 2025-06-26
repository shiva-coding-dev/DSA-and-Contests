#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
/*
1 2 2 2
. . 
. #  


a = 2 ,b = 3


*/
void slice(int n , int m , int a , int b){
    if(n == 1&& m == 1)return;
    int cuts = 1;
    while(n!= 1&& m!= 1){
        if(cuts%2 != 0){
            if(m>n){
                if(b<=m/2){
                    m = b;
                }else{
                    m = m-b+1;
                }
            }else{
                if(a<n/2){
                    n = a;
                }else{
                    n = n-a+1;
                }
            }
        }else{
            if(m>n){
                if(b<=m/2){
                    m = m-b;
                }else{
                    m = b-1;
                }
            }else{
                if(a<n/2){
                    n = n-a;
                }else{
                    n = a;
                }
            }
        }
        cuts++;
    }   
    cout<<cuts<<"\n";
}



int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        slice(n,m,a,b);

    }
    return 0;
}