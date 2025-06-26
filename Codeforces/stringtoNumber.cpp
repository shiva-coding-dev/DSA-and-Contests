#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
# include<sstream>
using namespace std;
typedef long long ll;
/*
One thousand five hundred sixety seven  
0       1      2   3     4
*/
void solve(string s){
    stringstream ss(s);
    string word;
    vector<string> a;
    while(ss >> word){
        a.push_back(word);
    }
    ll num = 0;
    for(int i = 0 ; i < a.size() ; i++){ 
            if(a[i] == "One"||a[i] == "one")num += 1;
            else if (a[i] == "Two"||a[i] == "two")num += 2;
            else if (a[i] == "Three"||a[i] == "three")num += 3;
            else if (a[i] == "Four"||a[i] == "four")num += 4;
            else if (a[i] == "Five"||a[i] == "five")num += 5;
            else if (a[i] == "Six"||a[i] == "six")num += 6;
            else if (a[i] == "Seven"||a[i] == "seven")num += 7;
            else if (a[i] == "Eight"||a[i] == "eight")num += 8;
            else if (a[i] == "Nine"||a[i] == "nine")num += 9;
            else if (a[i] == "Ten"|| a[i] == "ten") num += 10;
            else if(a[i] == "Twenty"|| a[i] == "twenty")num+=20;
            else if(a[i] == "Thirty"|| a[i] == "thirty")num+=30;
            else if(a[i] == "Forty"|| a[i] == "forty")num+=40;
            else if(a[i] == "Fifty"|| a[i] == "fifty")num+=50;
            else if(a[i] == "Sixty"|| a[i] == "sixty")num+=60;
            else if(a[i] == "Seventy"|| a[i] == "seventy")num+=70;
            else if(a[i] == "Eighty"|| a[i] == "eighty")num+=80;
            else if(a[i] == "Ninety"|| a[i] == "ninety")num+=90;
            else if(a[i] == "Hundred"|| a[i] == "hundred")num*=100;
            else if(a[i] == "Thousand"|| a[i] == "thousand")num*=1000;
            else if(a[i] == "Lakhs"|| a[i] == "lakhs"||a[i] == "lakh" || a[i] == "Lakh")num*=100000;
            else if(a[i] == "Crore"|| a[i] == "crore")num*=10000000;
            else cout<<"Number is too high \n";
    }
    cout<<num<<"\n";
}
int main() {
    string s;
    getline(cin , s);
    solve(s);
    return 0;
}