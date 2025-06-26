#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
#include<map>

void diverse(int n , string s){
    for(int i = 0 ; i < n-1 ; i++){
        if(s[i]!= s[i+1]){
            cout<<"YES\n";
            cout<<s[i]<<s[i+1]<<"\n";
            return ;
        }
    }
    cout<<"NO\n";
}
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    diverse(n,s);
    return 0;
}