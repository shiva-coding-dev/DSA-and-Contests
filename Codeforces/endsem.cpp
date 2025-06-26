#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
void solve(int n , vector<int> a){
    vector<int> c;
    int grSize = 1 , idx = 0;
    while(idx<n){
        vector<int>b;
        for(int j = 0 ; j<grSize && idx<n ; j++){
            b.push_back(a[idx]);
            idx++;
        }
        reverse(b.begin() , b.end());
        for(int x:b){
            c.push_back(x);
        }
        grSize++;
    }
    for(int x:c){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    solve(n,a);
    return 0;
}