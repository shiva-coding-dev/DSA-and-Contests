#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
void freindsGift(int n , int arr[]){
    vector<int> arr2;
    for(int j = 0 ; j<n ; j++){
        for(int i = 0 ; i <n ; i++){
            if(arr[i] == j+1){
                arr2.push_back(i+1);
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    freindsGift(n ,arr);
    return 0;
}