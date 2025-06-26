#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

int main() {
    int k,r;
    cin>>k>>r;
    int minShovel = 0;
    for(int i = 1 ;; i++){
        if((k*i)%10 == 0 || (k*i)%10 == r){
            minShovel = i;
            break;
        }
    }
    cout<<minShovel<<"\n";
    return 0;
}