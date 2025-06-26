#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void book(int n , vector<int> a){
    int sum = 0 , i=0;
    while(n>0){
        n = n - a[i];
        if(n>0){
            i = (i+1)%7;
        }
    }

    cout<<i+1<<"\n";   
}

int main() {
    int t;
    cin>>t;
    vector<int> a(7);
    for( int i = 0 ; i<7 ; i++){
        cin>>a[i];
    }
    book(t,a);
    return 0;
}