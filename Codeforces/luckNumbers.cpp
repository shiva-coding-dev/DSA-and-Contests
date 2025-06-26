#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
# include<algorithm>

/*
11 
47 74 
n= 15 
447
15-4 = 11-4 = 7
4477
22-4 = 18-4 = 14

sum = 4*a + b*7



*/

void lucky(int n ){
    // n = sum of digits 
    vector<int> a;
    int sum = 0;
    int temp = n;
    while(n%7!=0 && n>0){
        n-=4;
        a.push_back(4);
    }
    int k = n/7;
    for( int i = 0 ; i< k ; i++){
        a.push_back(7);
    }
    sort(a.begin() , a.end());
    for(int t :a){
        sum+=t;
    }
    if(sum==temp){
        for(int c:a){
            cout<<c;
        }
    }else cout<<"-1\n";
    
    cout<<"\n";
}
int main() {
    int n;
    cin>>n;
    lucky(n);
    return 0;
}