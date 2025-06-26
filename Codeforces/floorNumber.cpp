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
        int n , x;
        cin>>n>>x;
        int room = 0 , floor = 0;
        while(n>room){
            room = (2+floor*x);
            floor++;
        }
        cout<<floor<<"\n";
    }
    return 0;
}