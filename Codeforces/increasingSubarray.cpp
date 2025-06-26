#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
#include<algorithm>

// 1 5 7 2 11 12

void subaray(int n ,int arr[]){
    int currentLen = 1;
    int maxLen = 1;
    for(int i = 1 ; i < n ; i++){
        if(arr[i]>arr[i-1]){
            currentLen++;
            maxLen = max(currentLen , maxLen);
        }else{
            currentLen = 1;
        }
    }
    cout<<maxLen<<"\n"; 
}


int main() {
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subaray(n,arr);
    return 0;
}
