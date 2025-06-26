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
        vector<int> p0(n);
        for(int i = 0 ; i < n ; i++){
            cin>>p0[i];
        }
        vector<int>q0(n);
        for(int i = 0 ; i < n ; i++){
            cin>>q0[i];
        }
        
        vector<int> a;
        
        int i = 0;
        while(i<n){
            vector<int> r0;
            for(int j = 0 ; j<=i && i <n ; j++){
                r0.push_back(pow(2,p0[j])+pow(2,q0[i-j]));
            }
            int max_val = *max_element(r0.begin(), r0.end());
            a.push_back(max_val);
            i++;
        }
        for(int i = 0 ; i<a.size() ; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}