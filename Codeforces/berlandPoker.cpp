#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n , m , k;
        cin>>n>>m>>k;
        int cardsPerPlayer = n/k;
        int points;
        int remain = 0;
        if(cardsPerPlayer>=m){
            points = m;
        }else{
            remain = m-cardsPerPlayer;
            int remainingPlayer = k-1;
            points = cardsPerPlayer - ((remain+remainingPlayer-1)/remainingPlayer);
        }
        cout<<points<<"\n";
    }
    return 0;
}