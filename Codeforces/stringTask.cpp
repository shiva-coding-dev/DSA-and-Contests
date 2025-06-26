#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
// small letter  -> (97,122)
//capital letter -> (65,90)
void task(string s){
    vector<char> a;
    
    for(int i=0;i<s.length();i++){
        if(s[i] != 'a'&& s[i] != 'e'&&s[i] != 'i'&&s[i] != 'o'&&s[i] != 'u'&&s[i] != 'A'&&s[i] != 'E'&&s[i] != 'I'&&s[i] != 'O'&&s[i] != 'U'&&s[i]!='Y'&&s[i]!='y'){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i] = s[i] +32;
            }
            a.push_back('.');
            a.push_back(s[i]);
        }
    }
    for(int i = 0 ; i<a.size() ; i++){
        cout<<a[i];
    }
    cout<<endl;
}



int main() {
    string s;
    cin>>s;
    task(s);
    return 0;
}