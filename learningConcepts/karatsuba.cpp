#include <bits/stdc++.h>
using namespace std;

string singleMult(string a, string b){
    return to_string((a[0]-'0')*(b[0]-'0')) ;
}

string addZeroes(string a , int n){
    while(n--){
        a+="0";
    }
    return a;
}

string karatsuba(string a ,string b){
    while(a.size()>1&&a[0] == '0'){
        a.erase(a.begin());
    }
    while(b.size()>1&&b[0] == '0'){
        b.erase(b.begin());
    }
    if(a.size()==1&&b.size() ==1){
        return singleMult(a,b);
    }
    int n = max(a.size() , b.size());
    if(n%2!=0){
        n++;
    }

}


int main() {
    string a , b;
    cin>>a>>b;
    string result = "";
    cout<<result<<"\n";
    return 0;
}