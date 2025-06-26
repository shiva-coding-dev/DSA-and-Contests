#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
#include<map>
using namespace std;
int main() {
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    sort(a.rbegin() , a.rend());
    long long sum ;
    sum = (1LL*k*a[0]+a[1])*(m/(k+1)) + a[0]*(m%(k+1));
    cout<<sum<<"\n";  
    
    return 0;
}