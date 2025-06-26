#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

void music(int n , int m , vector<int> a){
    vector<pair<int , int> > b(n);
    for(int i = 0 ; i < n ; i++){
        b[i] = make_pair(a[i] , i+1);
    }
    sort(b.begin() , b.end());
    vector<int> final;
    int sum = 0;
    for(int i = 0 ; i< n ; i++){
        sum+=b[i].first;
        if(sum>m)break;
        else {
            final.push_back(b[i].second);
        }
    }
    cout<<final.size()<<"\n";
    for(int x:final){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main() {
    int n, m ;
    cin>>n>>m;
    vector<int> a(n);
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    music(n,m,a);
    return 0;
}