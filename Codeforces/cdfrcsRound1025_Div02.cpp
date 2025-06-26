#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>


void game(int n , vector<int> a){
    int maxIndex = 0  , minIndex = 0 ;

    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] == 1)count++;
    }
    if(count == n||count == 0){
        cout<<"YES\n";
        return;
    }
    for(int i = 0; i <n-1 ; i++){
        if(a[i] == 0 && a[i+1] == 0){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i =0 ; i < n ; i++){
            cin>>a[i];
        }
        game(n,a);
    }
    return 0;
}