#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a%b == 0)cout<<"0\n";
        cout<<b-(a%b)<<"\n";
    }
    return 0;
}