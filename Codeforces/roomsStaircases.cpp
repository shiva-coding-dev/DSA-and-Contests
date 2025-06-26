#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void rooms(int n , string s){
    int room = 1;
    int first = -1  , last = -1;
    for(int i = 0;i<n;i++){
        if(s[i] == '1'){
            first = i;
            break;  
        }
    }
    for(int i = n-1;i>0;i--){
        if(s[i] == '1'){
            last = i;
            break;  
        }
    }
    if(first == -1){
        room = n;
    }else{
        if(first == last){
            room = (max((n-first) , (first+1)))*2;
        }else if((n-first)>(last+1)){ // start from back 
            room = (n-first)*2;
        }else{
            room = (last+1)*2;
        }
    }
    cout<<room<<"\n";

}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        rooms(n,s);
    }
    return 0;
}