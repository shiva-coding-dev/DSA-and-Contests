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
        int n;
        cin>>n;
        if(n%2 == 0){
            cout<<(n/2)-1<<"\n";
        }else{
            cout<<(n-1)/2<<"\n";
        }
    }
    return 0;
}