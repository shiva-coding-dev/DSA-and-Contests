#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    vector<char> a;
    for(int i = 0 ; i < s.size() ; i++){
        a.push_back(s[i]);
    }
    reverse(s.begin() , s.end());
    for(int i = 0 ; i < s.size() ; i++){
        a.push_back(s[i]);
    }
    for(auto x :a){
        cout<<x;
    }
    cout<<"\n";
    return 0;
}