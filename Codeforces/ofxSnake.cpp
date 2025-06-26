#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>


void makeMat(int m , int n ){
    for( int i = 0 ; i < m ; i++){
        for( int j = 0 ; j < n ; j++){
            if( i == 0|| i%2 == 0){
                cout<<"#";
            }else{
                if(i== 3|| i%4 ==3){
                    if(j!= 0) cout<<".";
                    else cout<<"#";
                }else{
                    if(j!= n-1) cout<<".";
                    else cout<<"#";
                }
            }
        }cout<<"\n";
    }
}

int main() {
    int r , c;
    cin>>r>>c;
    makeMat(r,c);
    return 0;
}