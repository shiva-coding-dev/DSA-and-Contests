#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;
// This could be used for the finding the number in the sorted array or finding the count of any number finding the upper and the lower bound 

/*
eg lets take a sorted array 
5,6,7,8,9,10,10,10,23,34,
now i have to find whether 10 occurs if it does how many time 

*/
int main() {
    vector<int> a = {5,6,7,8,9,10,10,10,23,34};
    int n = a.size();
    int target = 10;
    sort(a.begin() , a.end());
    auto k = lower_bound(a.begin() , a.end() , target) - a.begin();
    auto l = upper_bound(a.begin() , a.end() , target) - a.begin();
    if(k<n && a[k] == target)cout<<"Target found at the index = "<<k<<" and "<<l-1<<"\n";
    //k and l are the indices of the target in the sorted array
    //to find the count of the ten simply do 
    cout<<"Count of the Target is - "<<l-k<<"\n";

    //below code gives the same data it gives the count  , Here r.first if the lower_bound value and r.second is the upper_bound value 
    auto r = equal_range(a.begin() , a.end() , target);
    cout<<r.second-r.first<<"\n";
    return 0;
}