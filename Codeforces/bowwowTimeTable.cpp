#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
int main() {
    string s;
    cin >> s;
    ll n = s.size();
    ll count = 0;
    ll res = n/2;
    if(n%2 == 0){
        cout<<res<<"\n";
        return 0;
    }
    for(auto c:s)if (c=='1')count++;
    res+=(count>1);
    cout<<res<<"\n";
    return 0;
}
