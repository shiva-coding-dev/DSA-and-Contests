#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
// 00010001110011101000  output -> 6
void erase(string s){
    vector<int> a;
    for(int i=0;i<s.length();i++){
        if(s[i] == '1')a.push_back(i);
    }
    int noOfOne = a.size();
    if(noOfOne<=1){
        cout<<"0\n";
        return;
    }
    int minIndex = a[0] , maxIndex = a[noOfOne-1] ;
    int count = 0;
    for(int i = minIndex;i<maxIndex; i++){
        if(s[i] == '0')count++;
    }
    cout<<count<<"\n";

}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s ;
        cin>>s;
        erase(s);
    }
    return 0;
}