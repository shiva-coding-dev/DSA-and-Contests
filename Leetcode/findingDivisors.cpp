#include <bits/stdc++.h>
using namespace std;

vector<int> divisors(int n) {
    unordered_set<int> a;
    int k = n;
    for(int i = 1 ; i < k ; i++){
        if(n%i == 0){
            a.insert(i);
            k = n/i;
            a.insert(k);
        }
    }
    vector<int> b;
    for(auto x:a)b.push_back(x);
    sort(b.begin() , b.end());
    return b;
}
int main() {
    int n;
    cin>>n;
    vector<int> a;
    a = divisors(n);
    for(auto x:a)cout<<x<<" ";
    cout<<endl;
    return 0;
}