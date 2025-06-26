#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++){
            sum += a[i];
        }
        bool odd = false, even = false;
        for(int i = 1 ; i < n ; i++){
            if(a[i]%2 == 0){
                even = true;
                break;
            }
        }
        for(int i = 1 ; i < n ; i++){
            if(a[i]%2 != 0){
                odd = true;
                break;
            }
        }

        if (sum % 2 == 0){
            if (a[0] % 2 == 0){
                cout<<(odd?"YES\n":"NO\n");
            }else{
                cout<<(even?"YES\n":"NO\n");
            }
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}