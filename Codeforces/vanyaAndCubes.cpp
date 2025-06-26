#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
//1->1 2-> 1+2, 3-> 1+2+3 , n -> 1+2+3+.....+n


void cubesHeight(int n){
    int height = 0 ; 
    int totalSum = 0 ;
    for( int i = 1 ;;i++){
        totalSum = totalSum + ((i*(i+1))/2);
        if(totalSum>n){
            break;
        }
        height++;
    }
    cout<<height<<"\n";
    
}

int main() {
    int t;
    cin>>t;
    cubesHeight(t);
    return 0;
}