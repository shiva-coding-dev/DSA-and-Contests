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
    while(t-- ){
        int n;
        cin>>n;
        int answer = (2*n -3);
        cout<<answer<<"\n";
        for(int i = 2 ;i<=n;i++){
            cout<<i<<" "<<1<<" "<<i<<"\n";
        }
        for(int i = 1 ; i <n-1 ; i++){
            cout<<i<<" "<<i+1<<" "<<n<<"\n";
        }
    }
    return 0;
}