#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
# include<algorithm>
// 1+3+2 
void maths(string s ){
    vector<int> a;
    int n = s.length();
    for(int i = 0 ; i < n ; i+=2){
        a.push_back(s[i]-'0');
    }
    sort(a.begin() , a.end());
    int j = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(i%2 == 0){
            cout<<a[j];
            j++;
        }else cout<<"+";
    }
    cout<<endl;

}

int main() {
    string s;
    cin>>s;
    maths(s);
    return 0;
}