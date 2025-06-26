#include <iostream>
using namespace std;
#include<cmath>

/*
n = no of element 
m = sum of all the elements in array 
The sum of every 𝑝
consecutive elements is equal to 𝑞
*/

void findTruth(int n , int m , int p , int q){
    if((q*n == m*p)&& q%p==0)cout<<"YES\n";
    else cout<<"NO\n";
}


int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n , m , p , q;
        cin>>n>>m>>p>>q;
        findTruth(n, m , p ,q);
    }
    return 0;
}