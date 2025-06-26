#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int a,x,y;
        cin>>a>>x>>y;
        int Min = min(x,y);
        int Max = max(x,y);
        if(Min>a && (Min-a)>0){
            cout<<"YES\n";
        }else if (Max<a && (a-Max)>0){
            cout<<"YES\n";
        }else {
            cout<<"NO\n";
        }
    }
    return 0;
}