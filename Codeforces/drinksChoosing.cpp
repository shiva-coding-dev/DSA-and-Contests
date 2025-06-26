#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
# include<map>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int , int> freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    vector<int> fArray(freq.size());
    int idx = 0;
    for(auto x:freq){
        fArray[idx] = x.second;
        idx++;
    }
    sort(fArray.rbegin() ,fArray.rend());
    int maxHappy = 0;
    int set = 0;
    for(int i = 0 ; i < fArray.size() ; i++){
        set += fArray[i]/2;
    }
    if(set<(n+1)/2){
        int remain = (n+1)/2 - set ;
        maxHappy = 2*set + remain;
    }else maxHappy = 2*set;

    cout<<maxHappy<<"\n";
    return 0;
}