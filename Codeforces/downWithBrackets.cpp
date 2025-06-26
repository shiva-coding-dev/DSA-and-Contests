#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
#include<algorithm>

void ambar(string s ){
    int n = s.size();
    int cnt = 0;
    bool is_possible = false;
    for(int i = 0 ; i < n - 1 ; i++){
        if(s[i] == '(') cnt++;
        else cnt--;
        if(i != 0){
            if(cnt == 0){
                is_possible = true;
            }
        }
    }
    
    if(is_possible) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s ;
        cin>>s;
        ambar(s);
    }
    return 0;
}