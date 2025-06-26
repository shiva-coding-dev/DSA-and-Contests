#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

int main() {
    string s;
    cin>>s;
    string a = s;
    int sum ;
    do{
        sum = 0 ; 
        for(int i = 0 ; i < a.length() ; i ++){
            sum+=(a[i] -'0');
        }
        a = to_string(sum);
    }while(sum>=10);
    cout<<sum<<"\n";

    return 0;
}