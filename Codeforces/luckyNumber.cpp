#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
//lucky number = 4 , 7;
typedef long long ll;
void findluckyNumber(ll number){
    vector<int> arr;
    while(number >0){
        int lastdigit = number%10;
        arr.push_back(lastdigit);
        number = number/10;
    }
    int count = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] == 4|| arr[i] == 7){
            count++;
        }
    }
    if(count == 4||count ==7){
        cout<<"YES\n";
    }else cout<<"NO\n";
}
int main() {
    ll n;
    cin>>n;
    findluckyNumber(n);
    return 0;
}