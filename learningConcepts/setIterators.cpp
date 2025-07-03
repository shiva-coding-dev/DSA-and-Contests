#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1 ,7,5,6,3,4,2};
    int x = 9;
    auto a = s.find(x);
    if(a == s.end())cout<<"X not found\n";
    else cout<<"found the "<<x<<"\n";
    // following code finds the nearest element to the x
    auto it = s.lower_bound(x);
    if (it == s.begin()) {
        cout << *it << "\n";
    } else if (it == s.end()) {
        it--;
        cout << *it << "\n";
    } else {
        int a = *it; it--;
        int b = *it;
    if (x-b < a-x) cout << b << "\n";
        else cout << a << "\n";
    }
    return 0;
}