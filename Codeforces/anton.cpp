#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
int antonPrblm(string s){
    int count = 0 ;
    if(s == "Tetrahedron")count+=4;
    else if(s=="Cube")count+=6;
    else if(s=="Octahedron")count+=8;
    else if(s=="Dodecahedron")count+=12;
    else count+=20;
    return count;
}
int main() {
    int t , count = 0;
    cin>>t;
    string s[t];
    for( int i = 0 ; i < t ; i++){
        cin>>s[i];
    }
    for( int i = 0 ; i < t ; i++){      
        count+=antonPrblm(s[i]);
    }
    cout<<count<<"\n";

    return 0;
}