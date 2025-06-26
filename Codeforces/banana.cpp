#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
//he cost of the first banana, initial number of dollars the soldier has and number of bananas he wants
// k 2k 4k 8k 
void banana( int k , int n , int w ){
    int totalMoney = 0;
    int borrow = 0;
    for( int i = 1 ; i<=w ; i++){
        totalMoney = totalMoney+ (i*k);
    }
    if(n<totalMoney){
        borrow = totalMoney - n;
    }
    cout<<borrow<<"\n";
}
int main() {
    int k,n,w;
    cin>>k>>n>>w;
    banana(k,n,w);
    return 0;
}