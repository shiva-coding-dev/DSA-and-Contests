#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void game(int n,int m ){
    int turns = 0 ;
    if(m%n!= 0){
        cout<<"-1\n";
        return;
    }
    if(n == m){
        cout<<"0\n";
        return;
    }
    int x = m/n;
    while(x%2==0){
        x/=2;
        turns++;
    }
    while(x%3==0){
        x/=3;
        turns++;
    }
    if(x!=1){
        cout<<"-1\n";
        return;
    }else{
        cout<<turns<<"\n";
    }
    
          
}

int main() {
    int n,m;
    cin>>n>>m;
    game(n,m);
    return 0;
}