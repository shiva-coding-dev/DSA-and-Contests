#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void transport(int n , int t , vector<int> a){
    int move = 0;
    int current = 1;
    while(current<=t){
        current = current + a[current -1];
        if(current == t){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";  
}

int main() {
    int n,t;
    cin>>n>>t;
    vector<int> portals(n-1);
    for(int i = 0;i<n-1; i++){
        cin>>portals[i];
    }
    transport(n,t,portals);
    return 0;
}