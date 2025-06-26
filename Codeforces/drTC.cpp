#include <iostream>
using namespace std;
# include<string>
#include<vector>

void findOne(int lengthOfBinaryString , string s){  
    int ons = 0;
    for(int i = 0 ; i < lengthOfBinaryString ; i++){
        string flipped = s;
        if(flipped[i] =='0')flipped[i] = '1';
        else flipped[i] = '0';

        for(int j = 0 ; j<lengthOfBinaryString ; j++){
            if(flipped[j] =='1')ons++;
        }
    }
    cout<<ons<<"\n";
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n ;
        cin>>n;
        string s;
        cin>>s;
        findOne(n , s);
    }
    return 0;
}