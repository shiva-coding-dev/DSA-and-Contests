#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void findEasy(int arr[] , int n){
    int count = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0) count++;
    }
    if(count == n) cout<<"EASY\n";
    else cout<<"HARD\n";
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }
    findEasy(arr , n);
    return 0;
}