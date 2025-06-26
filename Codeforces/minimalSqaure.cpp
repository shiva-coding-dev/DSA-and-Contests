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
        int a,b;
        cin>>a>>b;
        if(max(a,b)>2*(min(a,b))) cout<<pow(max(a,b) , 2)<<"\n";
        else cout<<pow(2*min(a,b) , 2)<<"\n";
    }
    return 0;
}