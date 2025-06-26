#include <iostream>
#include <vector>
#include <cmath>
# include<string>
# include<algorithm>
#include<iomanip>
using namespace std;

int main() {
    double h,l;
    cin>>h>>l;
    double d;
    d = (l*l - h*h)/(2.0*h);
    cout<<setprecision(13)<<d<<"\n";
    return 0;
}