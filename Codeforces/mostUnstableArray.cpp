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
        int n,m;;
        cin>>n>>m;
        int sum = 0;
        if(n == 1){
            sum = 0;
        }else if(n == 2){
            sum = m;
        }else{
            sum = 2*m;
        }
        cout<<sum<<"\n";
    }
    return 0;
}