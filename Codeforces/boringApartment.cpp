#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
int digits(int n ){
    int digit = 0 ;
    while(n!=0){
        n/=10;
        digit++;
    } 
    return digit;
}
void boringAparts(int n){
    int digitInNumber = digits(n);
    int calls ;
    int lastDigit = n%10;

    if(digitInNumber == 1){
        calls = (10*n - 9);
    }else if(digitInNumber == 2){
        calls = (10*lastDigit - 7);
    }else if(digitInNumber == 3){
        calls = (10*lastDigit - 4);
    }else {
        calls = (10*lastDigit);
    }
    cout<<calls<<"\n";
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n ;
        cin>>n;
        boringAparts(n);
    }
    return 0;
}