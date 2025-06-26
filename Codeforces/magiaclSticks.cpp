#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

void stciks(int n){
    if (n%2 == 0){
        cout<<n/2<<"\n";
    }else{
        cout<<(n/2)+1<<"\n";
    }
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n;
        cin>>n;
        stciks(n);
    }
    return 0;
}