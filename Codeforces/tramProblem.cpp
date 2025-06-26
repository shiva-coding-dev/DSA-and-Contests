#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

int main() {
    int n;
    cin>>n;
    int currPassengers = 0 , maxPassengers = 0;
    for(int i = 0 ; i < n ; i++){
        int a,b;
        cin>>a>>b;
        currPassengers = currPassengers -a+b;
        if(currPassengers>maxPassengers){
            maxPassengers = currPassengers;
        }

    }
    cout<<maxPassengers<<"\n";

    return 0;
}
