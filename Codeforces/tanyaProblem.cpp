#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>
int answer(int number , int k ){
    if(k!=0){
        if(number%10 == 0){
            number/=10;
        }else{
            number-=1;
        }
        return answer(number , k-1);
    }else{
        return number;
    }
}
int main() {
    int num, k;
    cin>>num>>k;
    cout<<answer(num,k)<<"\n";
    return 0;
}