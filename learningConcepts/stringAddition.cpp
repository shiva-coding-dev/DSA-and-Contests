#include <bits/stdc++.h>
using namespace std;

string addString(string a ,string b){
    string result = "";
    int carry = 0;
    for(int i = a.size()-1 ; i >=0 ; i--){
        int sum = (a[i]-'0')+(b[i]-'0')+carry;
        carry = 0;
        result.push_back((sum%10)+'0');
        carry=sum/10;
    }

    if(carry){
        result.push_back(carry+'0');
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string a = "3798472983";
    string b = "8748792342";
    cout<<addString(a,b)<<"\n";
    return 0;
}