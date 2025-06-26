#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void pattern(int n ){
    int mid = n;
    for(int k = 0 ; k <=n ; k++ ){
        for(int i = 0; i<n-k ; i++)cout<<"  ";
        for(int j = 0 ; j <=k ; j++)cout<<j<<" ";     
        for(int l = k-1; l >=0 ; l--)cout<<l<<" ";
        cout<<endl;
    }
    for(int i = 0 ;i<=n ; i++){
        for(int j = 0 ; j <= i ; j++)cout<<"  ";
        for(int l = 0 ; l<n-i ; l++)cout<<l<<" ";
        for(int t = n-i-2;t>=0; t--)cout<<t<<" ";
        cout<<endl;
    }
}

int main() {
    int t;
    cin>>t;
    pattern(t);
    return 0;
}