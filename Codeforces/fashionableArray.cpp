#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
# include<algorithm>

void fashion (int n , vector<int> a){
    sort(a.begin() , a.end());
    int maxA = a[n-1] , minA = a[0];
    if((maxA+minA)%2 == 0){
        cout<<"0\n";
        return;
    }
    int valA = 0 , valB = 0;
    for(int i = 0 ; i< n ; i++){
        int sumA = maxA+a[i];
        if(sumA%2 == 0){
            valA = i;
            break;
        }
    }
    int count = 0;
    for(int i = n-1 ; i>=0 ; i--){
        int sumB  = minA + a[i];
        if(sumB%2 == 0){
            valB = count;
            break;;
        }
        count++;
    }
    int finalValue = min(valA , valB);
    cout<<finalValue;
    cout<<"\n";
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
        }
        fashion(n,a);
    }
    return 0;
}