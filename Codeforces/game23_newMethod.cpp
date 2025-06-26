#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void game(int n , int m ){
    int noOfTwo = 0 , noOfThree = 0;
    if(m%n!= 0){
        cout<<"-1\n";
        return;
    }
    while(m%2==0){
        m/=2;
        noOfTwo++;
    }
    while(m%3==0){
        m/=3;
        noOfThree++;
    }
    int total = (2*noOfTwo)+ (3*noOfThree);
    if(total != m){
        cout<<"-1\n";
        return;
    }
    vector<int> a;
    for(int i = 0 ; i < noOfThree ; i++){
        a.push_back(3);
    }
    for(int i = 0 ; i < noOfTwo ; i++){
        a.push_back(2);
    }
    sort(a.begin(), a.end());
    int k = 1;
    int j = 0 , turns = 0;
    while(k!=n){
        k = k*a[j];
        j++;
        turns++;
    }
    cout<<a.size() - turns<<"\n";
}

int main() {
    int n,m;
    cin>>n>>m;
    game(n,m);
    return 0;
}