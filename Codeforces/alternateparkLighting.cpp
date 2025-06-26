#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int m , n ;
        cin>>n>>m;
        int light = (m*n+1)/2;
        cout<<light<<"\n";
    }
    return 0;
}