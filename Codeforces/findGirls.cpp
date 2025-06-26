#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
# include<unordered_set>

void findGirl(string a){
    unordered_set<char> set;
    for(int i = 0 ; i<a.length() ; i++){
        set.insert(a[i]);
    }

    int count = set.size();
    if(count!=0 && count%2 == 0){
        cout<<"CHAT WITH HER!\n";
    }else cout<<"IGNORE HIM!\n";
}

int main() {
    string s ;
    cin>>s;
    findGirl(s);
    return 0;
}