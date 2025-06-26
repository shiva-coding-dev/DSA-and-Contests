#include <iostream>
using namespace std;
# include<string>

int main() {
    int t;
    cin>>t;
    cin.ignore();
    int x = 0 ;
    string s;
    while(t--){
        cin >> s;
        if (s == "--X") {
            --x;
        } else if (s == "++X" || s == "X++") {
            ++x;
        }else if ( s == "X--") {
            x--;
        }else if (s == "X++") {
            x++;
        } else {
            cout << "Invalid Input\n";
            continue;
        }
    }
    cout<<x<<"\n";
    return 0;
}