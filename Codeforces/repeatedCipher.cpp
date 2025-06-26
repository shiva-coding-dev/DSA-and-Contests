#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
void cipher(string s){
    int n = s.length();
    for(int i = 1 ;; i++){
        int k = (i*(i-1))/2;
        if(k>=n) break;
        cout<<s[k];
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    cipher(s);
    return 0;
}