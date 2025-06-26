#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
# include<utility>

/*
2H
3D 4C AC KD AS
NO  
*/
void card(vector<pair<char , char> > s , string a){
    int count = 0;
    for(int i = 0 ; i<s.size() ; i++){
        if(s[i].first == a[0]||s[i].second == a[1] ){
            cout<<"YES\n";
            return;
        }else count++;
    }
    if(count == s.size()) cout<<"NO\n";
}

int main() {
    string a;
    cin>>a;
    vector<pair<char,char> > cards;
    for(int i=0;i<5;i++){
        string temp;
        cin>>temp;
        cards.push_back(make_pair(temp[0] , temp[1]));
    }
    card(cards , a);
    return 0;
}