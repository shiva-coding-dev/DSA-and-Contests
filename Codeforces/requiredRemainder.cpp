#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

void rRemainder(int x, int y , int n ){
    long long k = (n - y) / x * x + y;
    cout<<k<<"\n";
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int x, y, n;
        cin>>x>>y>>n;
        rRemainder(x,y,n);
    }
    return 0;
}