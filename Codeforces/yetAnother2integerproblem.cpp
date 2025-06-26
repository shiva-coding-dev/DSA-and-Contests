#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int a , b;
        cin>>a>>b;
        int moves;
        int value  = (a-b)%10;
        if(value == 0){
            moves = (abs(a-b)/10);
        }else{
          moves = (abs(a-b)/10)+1;
        }
        cout<<moves<<"\n";
    }
    return 0;
}