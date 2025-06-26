#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
void sticks(long long n){
    if(n%2 != 0){
        cout<<"0\n";
        return;
    }
    long long num = n/2;
    int i = 1 ,  j = num-1;
    int count = 0;
    while(i<j){
        i++;
        j--;
        count++;
    }
    cout<<count<<"\n";
}

int main() {
    long long  n;
    cin>>n;
    sticks(n);
    return 0;
}