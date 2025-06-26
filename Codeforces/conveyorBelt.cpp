#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

/*
RRD
DDR
RRC
OUTPUT-> 1

*/

void belt(int n , int m ){
    vector<string> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int changes = 0 ;
    for(int i = 0 ; i<n-1; i++){
        if(a[i][m-1]!='D')changes++;
    }
    for(int i = 0 ; i<m-1; i++){
        if(a[n-1][i]!='R')changes++;
    }
    cout<<changes<<"\n";

}


int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n , m ;
        cin>>n>>m;
        belt(n,m);
    }
    return 0;
}