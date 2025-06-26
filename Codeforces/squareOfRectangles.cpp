#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
# include<map>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        vector<int> a(6);
        int maxValue = 0;
        int sum = 0;
        for( int i = 0 ; i < 6 ; i++){
            cin>>a[i];
            maxValue = max(maxValue , a[i]);
            sum+=a[i];
        }

        int l1 = a[0] , b1 = a[1] , l2 = a[2] , b2 = a[3] , l3 = a[4] , b3 = a[5];
        if(l1==l2&&l2==l3){
            if(b1+b2+b3 == l1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else if(b1==b2&&b2==b3){
            if(l1+l2+l3 == b1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            for(int i = 0 ; i<6 ; i+=2){
                int k = i;
                if(a[i] == maxValue && a[2]+a[4] == a[0] && a[3]==a[5] && a[1]+a[3] == a[0]){
                }
            }
        }
    }
    return 0;
}