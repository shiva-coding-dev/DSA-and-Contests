#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
# include<algorithm>

void studentInClass(vector<int> a , int n){
    int ts = 2*n;
    sort(a.begin(),a.end());
    int median = abs(a[(ts/2)-1]-a[ts/2]);
    cout<<median<<"\n";
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n ;
        cin>>n;
        vector<int> a(2*n);
        for(int i = 0 ; i < 2*n ; i++){
            cin>>a[i];
        }
        studentInClass(a,n);
    }
    return 0;
}