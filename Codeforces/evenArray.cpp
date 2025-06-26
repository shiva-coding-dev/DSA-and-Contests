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
        int n ;
        cin>>n;
        vector<int> a(n);
        for(int i = 0 ; i <n ; i++){
            cin>>a[i];
        }
        int count1  = 0 , count2 = 0;
        for(int i = 0 ; i< n ; i++){
            if(i%2 != a[i]%2  ){
                if(a[i]%2 == 0){
                    count1++;
                }else count2++;
            }
        }
        if(count1 != count2){
            cout<<"-1\n";
        }else{
            cout<<count1<<"\n";
        }
    }
    return 0;
}