#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &a , int left ,int mid , int right ){
    vector<int> temp ;
    int i = left , j = mid +1;
    //merge the sorted array 
    while(i<=mid  && j<=right){
        if(a[i]<=a[j]){
            temp.push_back(a[i++]);
        }else{
            temp.push_back(a[j++]);
        }
    }
    while (i <= mid) temp.push_back(a[i++]);
    while (j <= right) temp.push_back(a[j++]);
    for (int k = 0; k < temp.size(); k++)
        a[left + k] = temp[k];
}

void mergeSort(vector<int> &a , int left , int right ){
    if(left>=right)return;
    int mid = (left+right)/2;
    mergeSort(a, left , mid );
    mergeSort(a, mid+1 , right );
    merge(a , left , mid , right);

}

int main() {
    vector<int> a  = {1,2,34,54,65,65,34,45,68,88,3,223,34};
    mergeSort(a ,0,a.size()-1);

    for(auto x:a)cout<<x<<" ";
    cout<<endl;
    return 0;
}