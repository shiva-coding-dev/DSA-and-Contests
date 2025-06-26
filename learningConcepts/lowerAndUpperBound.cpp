#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

int main() {
    vector<int> a;
    a.push_back(12);
    a.push_back(45);
    a.push_back(56);
    a.push_back(65);
    a.push_back(98);
    a.push_back(42);
    a.push_back(53);
    a.push_back(23);

    sort(a.begin() , a.end());
    auto k = lower_bound(a.begin() , a.end() , 65) - a.begin();
    if (k < a.size() && a[k] == 65) {
        cout<<"x found at index "<<k<<"\n";
    }   
    cout<<endl;
    return 0;
}