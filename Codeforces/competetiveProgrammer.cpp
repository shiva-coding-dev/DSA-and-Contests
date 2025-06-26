#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        bool isZero = false;
        vector<int> a;
        for(int i = 0 ; i < s.length() ; i++){
            a.push_back(s[i]);
        }
        int idx = 0;
        for(int i = 0 ; i < a.size() ; i++){
            if((a[i]-'0') == 0){
                isZero = true;
                idx = i;
                break;
            }
        }
        if(isZero){
            bool isEven = false;
            int sum = 0 ;
            for(int i = 0 ; i<a.size(); i++){
                if(i!= idx){
                    if((a[i]-'0')%2 == 0){
                        isEven = true;
                    }
                    sum+=(a[i]-'0');
                }
            }
            if(isEven == true && sum%3 == 0){
                cout<<"red\n";
            }else{
                cout<<"cyan\n";
            }
        }else{
            cout<<"cyan\n";
        }
    }
    return 0;
}