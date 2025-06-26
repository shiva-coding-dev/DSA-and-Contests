#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

void lcm(int l , int r){
    int largeEven, smallEven;
    if(r%2 == 0)largeEven = r;
    else largeEven = r-1;
    if(l%2 == 0)smallEven = l;
    else smallEven = l+1;

    if(largeEven/2 >=l){
        cout<<largeEven/2<<" "<<largeEven<<"\n";
    }else{
        cout<<"-1 -1\n";
    }
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int l , r;
        cin>>l>>r;
        lcm(l,r);  
    }
    return 0;
}