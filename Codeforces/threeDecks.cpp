#include <iostream>
using namespace std;

void canMakeEqual(int a, int b, int c) {
    int total = a + b + c;
    if (total % 3 != 0) {
        cout << "NO\n";
        return;
    }
    int carry = c- abs(a-b);
    if(carry<b)cout<<"NO\n";
    else{
        int carry2 = abs(carry-b);
        if(carry2%3==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        canMakeEqual(a, b, c);
    }
    return 0;
}
