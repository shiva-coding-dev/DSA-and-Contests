#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long total = a + b + c;
        if (total % 9 == 0 && min({a, b, c}) >= total / 9) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}