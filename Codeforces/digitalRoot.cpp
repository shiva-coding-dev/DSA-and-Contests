#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        long long  k ;
        int x;
        cin>>k>>x;
        long long final_result = x+(9*(k-1));
        cout<<final_result<<"\n";
    }
    return 0;
}