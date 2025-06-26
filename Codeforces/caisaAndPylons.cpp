#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    int Max=0;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        Max = max(Max , a[i]);
    }
    cout<<Max<<"\n";   
    return 0;
}