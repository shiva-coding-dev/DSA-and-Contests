#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {56,1,3,4,6,2,6,6,3,4,3,2,8,45,9,34};
    vector<int> b = a;
    vector<int> c = a;
    int n  = a.size();
    cout<<"Selection Sort - ";
    for(int i = 0 ; i < n-1 ; i ++){
        int mn = i ;
        for(int j= i ; j<n ; j++){
            if(a[j]<a[mn])mn = j;
        }
        swap(a[mn] , a[i]);
    }
    for(auto x:a)cout<<x<<" ";
    cout<<"\n";
    cout<<"Bubble Sort - ";
    for(int i = n ; i>=0 ; i--){
        for(int j = 0 ; j< i-1 ; j++){
            if(b[j]>b[j+1])swap(b[j],b[j+1]);
        }
    }
    for(auto x:b)cout<<x<<" ";
    cout<<"\n";
    cout<<"Insertion Sort - ";
    for(int i =1 ; i< n ; i++){
        int val = c[i];
        int j = i-1;
        while(val<c[j]&&j>=0){
            c[j+1] = c[j];
            j--;
        }
        c[j+1] = val;
    }
    for(auto x:c)cout<<x<<" ";
    cout<<endl;
    return 0;
}