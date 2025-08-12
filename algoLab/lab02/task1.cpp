#include <bits/stdc++.h>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

long long comparisonCount = 0;

int partitionIndex(vector<long long > &a , int l , int r ){
    int pivotElementIndex = l+rand()%(r-l+1);
    swap(a[pivotElementIndex],a[r]);
    long long  pivotElem  = a[r];
    int i =l-1;
    for(int j = l ;j<r ; j++){
        comparisonCount++;
        if(a[j]<=pivotElem){
            i++;
            swap(a[i] ,a[j] );
        }
    }
    swap(a[i+1] , a[r]);
    return i+1;
}

long long rSelect(vector<long long> &a,int l , int r , int i ){
    if(l == r)return a[l];
    int pvtIdx = partitionIndex(a , l ,r);
    int j = pvtIdx-l+1;
    if(i== j){
        return a[pvtIdx];
    }
    else if ( i<j){
        return rSelect(a , l , pvtIdx-1 , i);
    }
    else{
        return rSelect(a , pvtIdx+1 , r , i-j);
    }
}



int main() {
    srand((unsigned)time(nullptr));
    ifstream fin("data.txt");
    if(!fin){
        cerr<<"Error cannot open data.txt\n";
        return 1;
    }

    vector<long long > a;
    long long  number ;
    while (fin >> number) a.push_back(number);

    if(a.empty()){
        cerr<<"It's empty either is in another directory\n";
    }
    int i = 500;
    vector<long long> arr_copy = a;
    long long  answer = rSelect(arr_copy, 0 , (int)arr_copy.size()-1,i);
    cout << i << "-th smallest element: " << answer << "\n";
    cout << "Total comparisons: " << comparisonCount << "\n";

    return 0;
}