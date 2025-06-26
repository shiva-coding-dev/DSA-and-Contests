#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

int main() {
    long long  n;
    cin>>n;
    vector<long long > a(n);
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    sort(a.begin() , a.end());
    if(a[n-2]+a[n-3]<=a[n-1])cout<<"NO\n";
    else{
        cout<<"YES\n";
        cout<<a[n-1]<<" ";
        for(int i=n-3;i>=0;i--)cout<<a[i]<<" ";
        cout<<a[n-2]<<"\n";
    }
    return 0;
}