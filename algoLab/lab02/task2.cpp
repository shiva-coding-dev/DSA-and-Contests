#include <bits/stdc++.h>
using namespace std;

long long comparisonCount = 0;
long long mediansOfmedians(vector<long long > &a , int l , int r){
    sort(a.begin()+l , a.begin()+r+1 , [&](long long a , long long b){
        comparisonCount++;
        return a<b;
    });
    return a[l+(r-l)/2];
}

int partitionTheArray (vector<long long > &a , int l , int r , long long  pivotElement){
    int pvtIdx = l;
    for(int i = l ; i<=r ; i++){
        comparisonCount++;
        if(a[i] == pivotElement){
            pvtIdx = i;
            break;
        }
    }
    swap(a[pvtIdx] , a[r]);
    int i = l-1;
    for(int j=l; j<r;j++){
        comparisonCount++;
        if(a[j]<= pivotElement){
            i++;
            swap(a[i] , a[j]);
        }
    }
    swap(a[i+1] , a[r]);
    return i+1;
}


long long dSelect(vector<long long > &a , int l , int r , int k ){
    if(l==r){
        return a[l];
    }
    vector<long long > medianArray;
    for(int i = l ; i<=r ; i+=5){
        int sRight = min(i+4 , r);
        medianArray.push_back(mediansOfmedians(a,i,sRight));
    }

    long long medOfmed;
    if(medianArray.size() == 1){
        medOfmed = medianArray[0];
    }else{
        medOfmed = dSelect(medianArray , 0 , medianArray.size()-1 , medianArray.size()/2);
    }
    int pvtIdx = partitionTheArray(a,l,r,medOfmed);
    int length = pvtIdx - l+1;

    if(k == length){
        return a[pvtIdx];
    }else if (k<length){
        return dSelect(a,l,pvtIdx-1,k);
    }else {
        return dSelect(a,pvtIdx+1,r,k-length);
    }
}
int main() {
    ifstream fin("data.txt");
    vector<long long> arr;
    long long num ;
    while(fin>>num){
        arr.push_back(num);
    }

    int i = 500;
    long long answer = dSelect(arr,0,arr.size()-1,i);

    cout<<i<<"-ith samllest Element : "<<answer<<"\n";
    cout<<"Total Comparisons = "<<comparisonCount<<"\n";
    return 0;
}