#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int c , sum;
        cin>>c>>sum;
        long long cost = ((sum%c)*pow(((sum/c)+1) ,2))+((c-(sum%c))*pow((sum/c) ,2));
        //int cost = r * (x + 1)² + (c - r) * x²
        cout<<cost<<"\n";
    }
    return 0;
}