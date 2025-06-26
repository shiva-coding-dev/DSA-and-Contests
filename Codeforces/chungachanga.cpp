#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
int main() {
    long long  x , y, z;
    cin>>x>>y>>z;
    long long  minCiki = (x/z)+(y/z);
    long long  maxCiki = 0;
    long long  exchange = 0;
    if(x%z == 0 || y%z == 0){
        maxCiki = minCiki;
    }else{
        if((x%z)+(y%z) >= z){
            long long  rest = max(x%z , y%z);
            long long  remain = z - rest;
            if(remain <= min(x%z , y%z)){
                exchange = remain;
                maxCiki = minCiki+1;
            }
        }else{
            maxCiki = minCiki;
        }
    }
    cout<<maxCiki<<" "<<exchange<<"\n";
    return 0;
}