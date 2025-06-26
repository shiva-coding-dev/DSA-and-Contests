#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void capitalizWord(string a){
    string b;
    if(a[0]>=97&&a[0] <= 122){
        b[0] = a[0]-32;
    }else b[0] = a[0];
    cout<<b[0];
    for(int i = 1 ; i < a.length() ; i++){
        cout<<a[i];
    }
    cout<<endl;
}

int main() {
    string s ;
    cin>>s;
    capitalizWord(s);
    return 0;
}