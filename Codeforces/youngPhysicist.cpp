#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> a(3*n);
    for(int i = 0 ; i < 3*n ; i++){
        cin>>a[i];
    }
    int sumX = 0 , sumY = 0 , sumZ = 0;
    for(int i = 0 ; i < 3*n ; i+=3){
        sumX +=a[i];
        sumY+=a[i+1];
        sumZ+=a[i+2];
    }
    if(sumX == 0 &&sumY == 0 && sumZ == 0 ){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    return 0;
}