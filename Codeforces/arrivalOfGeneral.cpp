#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>


void arrivalGeneral(int s[], int n ){
    int largeH = s[0] , smallH = s[0];
    int swap = 0;
    int maxIndex = 0 , minIndex = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i]>largeH){
            largeH = s[i];
            maxIndex = i ;
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(s[i]<=smallH){
            smallH = s[i];
            minIndex = i ;
        }
    }
    if(maxIndex < minIndex)swap = (maxIndex + (n-1-minIndex));
    else swap = (maxIndex + (n-1-minIndex)) - 1;
    cout<<swap<<"\n";
}

int main() {
    int n;
    cin>>n;
    int s[n];
    for( int i = 0 ; i < n ; i++){
        cin>>s[i];
    }
    arrivalGeneral(s , n); 
    return 0;
}