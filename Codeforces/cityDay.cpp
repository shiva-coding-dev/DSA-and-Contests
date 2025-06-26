#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

/*
10 2 2
10 9 6 7 8 3 2 1 4 5
3

10 2 3
10 9 6 7 8 3 2 1 4 5
8

x = 2 , y = 3 
i = 5
j= 4 3 
n-j = 6 7 
*/

void cityDay(int n , int x , int y ){
    vector<int> a(n);
    for(int i = 0; i<n ; i++){
        cin>>a[i];
    }
    for(int d = 0; d<n ; d++){
        bool ok = true ;
        for(int j=d-x;j<d;j++){
            if(j>=0 && a[d]>= a[j]){
                ok = false ;
                break;
            }
        }

        for(int j = d+1 ; j<= d+y ; j++){
            if(j<n && a[d]>=a[j]){
                ok = false;
                break;
            }
        }

        if(ok == true ){
            cout<<d+1<<"\n";
            return;
        }
    }
}
int main() {
    int n,x,y;
    cin>>n>>x>>y;
    cityDay(n,x,y);
    return 0;
}