#include <iostream>
using namespace std;
# include<string>
#include<cmath>
#include<vector>

void changeNum(string a){
    vector<int> x;
    for(int j = 0 ; j< a.length() ; j++){
        x.push_back(a[j] - '0');
    }
    if(x[0] !=9){
        for(int i = 0 ; i < x.size() ; i++){
            int min  = x[i];
            if(abs(9 - x[i])< min){
                min = 9 - x[i];
                x[i] = min;
            }else{
                x[i] = x[i];
            }
            cout<<x[i];
        } 
    }else{
        cout<<x[0];
        for(int i = 1 ; i < x.size() ; i++){
            int min  = x[i];
            if(abs(9 - x[i])< min){
                min = 9 - x[i];
                x[i] = min;
            }else{
                x[i] = x[i];
            }
            cout<<x[i];
        } 
    }
}

int main() {
    string s;
    cin>>s;
    changeNum(s);
    cout<<"\n";
    return 0;
}