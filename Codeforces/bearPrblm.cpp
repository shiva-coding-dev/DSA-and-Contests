#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>



void bear(int a , int b ){
    int year = 0 ;
    while(a<=b){
        a = 3*a;
        b = 2*b;
        year++;
    }
    cout<<year<<"\n";
}

int main() {
    int a, b;
    cin>>a>>b;
    bear(a,b);
    return 0;
}