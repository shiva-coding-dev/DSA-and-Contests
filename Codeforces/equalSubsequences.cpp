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
        int n , k ;
        cin>>n>>k;
        vector<char> a;
        for(int i = 0 ; i < n ; i++){
            if (i<k)a.push_back('1');
            else a.push_back('0');
        }
        for(auto x: a){
            cout<<x;
        }
        cout<<"\n";
    }

    return 0;
}