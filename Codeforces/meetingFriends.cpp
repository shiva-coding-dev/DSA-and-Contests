#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>


void minimumPath(int a , int b , int c ){
    int minimum = min(a,min(b,c));
    int maximum = max(a,max(b,c));
    int avg = (a+b+c)/3;
    int sum = abs(avg-a)+abs(avg-b)+abs(avg-c);
    for(int i = minimum ; i< maximum ; i++ ){
        int newSum = abs(i-a)+abs(i-b)+abs(i-c);
        if(newSum<=sum){
            sum = newSum;
        }
    }
    cout<<sum<<"\n";

}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    minimumPath(a,b,c);
    return 0;
}