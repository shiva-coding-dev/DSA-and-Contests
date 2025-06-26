#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
# include<numeric>
using namespace std;


int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

void  solve(string s1 , string s2){
    if(s1+s2!= s2+s1){
        cout<<"-1\n";
        return;
    }
    int l = lcm(s1.size() , s2.size());
    string result = "";
    for (int i = 0; i < l / s1.size(); i++) {
        result += s1;
    }
    cout<<result<<"\n";
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1 ,s2;
        cin>>s1>>s2;
        solve(s1,s2);    
    }
    return 0;
}