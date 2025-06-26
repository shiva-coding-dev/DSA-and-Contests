#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void buttons(int n ){
    if(n!= 1){
        int sum = n+1;
        for( int i = 2 ; ;i++){
            if(n-i != 0){
                sum = sum + ((n-i)*i +1);
            }
            else{
                cout<<sum<<"\n";
                return;
            }
        }
    }else{
        cout<<"1\n";
        return;
    }
}

int main() {
    int t;
    cin>>t;
    buttons(t);
    return 0;
}