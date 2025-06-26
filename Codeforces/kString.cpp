#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
# include<map>
/*
3
aaabbbcccddd 
4
aaaabbbbccccdddd
output => 
index = n*(i%n) 
i != 3 7 11
i%n = n-1
string length = 9
length/n = 3
loop 
i = 2 5 8 -> i%3 = 2

a[i] == a[i%3]
*/

void kstring(int k , string s ){
    int length = s.length();
    if(length%k !=0){
        cout<<"-1\n";
        return;
    }
    map<char , int > freq;
    for( char c : s){
        freq[c]++;
    }
    string part = "";
    for(const auto& p: freq){
        if(p.second%k !=0){
            cout<<"-1\n";
            return;
        }
        part = part + string(p.second/k , p.first);
    }
    string result = "";
    for(int i=0;i<k;i++){
        result+=part;
    }
    cout<<result<<"\n";
}

int main() {
    int t;
    cin>>t;
    string s;
    cin>>s;
    kstring(t,s);
    return 0;
}

