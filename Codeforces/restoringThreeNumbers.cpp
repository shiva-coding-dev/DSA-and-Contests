#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

int main() {
    int x1,x2,x3,x4;
    cin>>x1>>x2>>x3>>x4;
    int k,b,c;
    int d = max(x1,max(x2,max(x3,x4)));
    vector<int> a;
    a.push_back(d-x1);
    a.push_back(d-x2);
    a.push_back(d-x3);
    a.push_back(d-x4);

    for(int i = 0; i< a.size() ; i++){
        if(a[i]!=0){
            cout<<a[i]<<" ";
        }
    }
    cout<<"\n";
    return 0;
}