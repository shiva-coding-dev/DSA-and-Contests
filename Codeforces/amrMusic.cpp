#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
# include<unordered_map>
using namespace std;

void music (int n ,int m, vector<int>a){
    int sum = 0;
    vector<int> b;
    vector<int> c =a;
    sort(a.begin() , a.end());
    for(int i = 0 ; i<n ; i++){
        sum+=a[i];
        if(sum>m){
            break;
        }else{
            b.push_back(a[i]);
        }
    }
    cout<<b.size()<<"\n";
    unordered_map<int, vector<int> > indexMap;
    for (int i = 0; i < c.size(); ++i) {
        indexMap[c[i]].push_back(i);
    }
    unordered_map<int, int> used;

    for (int i = 0; i < b.size(); ++i) {
        int val = b[i];
        int count = used[val];
        if (count < indexMap[val].size()) {
            cout << (indexMap[val][count])+1 << " ";
            used[val]++;
        } else {
            cout << -1 << " "; 
        }
    }
    cout<<endl;
}
int main() {
    int t , m;
    cin>>t>>m;
    vector<int> a(t);
    for(int i = 0;i <t ; i++){
        cin>>a[i];
    }
    music(t,m,a );
    return 0;
}