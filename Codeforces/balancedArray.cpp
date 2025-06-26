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
        int n;
        cin>>n;
        vector<int> a;
        if (n%4!=0){
            cout<<"NO\n";
        }else{
            int sum = n+2;
            int k = n/2;
            for(int i = 0 ; i <k ; i++){
                if(i<k/2){
                    int value = 2*(i+1);
                    a.push_back(value);
                    a.push_back(sum - value);
                }else{
                    int newValue = 2*(i - (k/2))+1;
                    a.push_back(newValue);
                    a.push_back(sum - newValue);
                }
            }
            cout<<"YES\n";
            for(int i = 0 ; i <a.size() ; i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n"; 
        }
    }
    return 0;
}