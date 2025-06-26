#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>


void caps(string s){
    int count1 = 0 , count2 = 0;
    for(int i = 0 ; i < s.length(); i++){
        if(isupper(s[i])) count1++;
    }
    for(int i = 1 ; i < s.length(); i++){
        if(isupper(s[i])) count2++;
    }

    if(count1 == s.length() || count2 == s.length()-1 ){
        for(int i = 0 ; i < s.length() ; i++){
            if(isupper(s[i])) s[i] = tolower(s[i]);
            else s[i] = toupper(s[i]);
        }
    }
    cout<<s<<"\n";
}

int main() {
    string s;
    cin>>s;
    caps(s);
    return 0;
}