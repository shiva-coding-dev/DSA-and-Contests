#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void dreamoon(int n , int m ){
    int minimumMoves;
    if(n%2 == 0)minimumMoves = n/2;
    else minimumMoves = n/2 + 1;
    int moves = -1;
    for(int i = minimumMoves ; i<= n ; i++){
        if(i%m == 0){
            moves = i;
            break;
        }
    }
    cout<<moves<<"\n";
}

int main() {
    int n,m;
    cin>>n>>m;
    dreamoon(n,m);  
    return 0;
}