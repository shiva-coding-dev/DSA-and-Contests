#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
# include<string>

void toast(int n , int k , int l , int c  , int d , int p , int nl , int np){
    int totalDrink = k*l;
    int totalSlices = c*d;
    int drinkPerPerson = totalDrink/n;
    int slicesPerPerson = totalSlices/n;
    int saltPerPerson = p/n;
    int drinkPerToast = drinkPerPerson/nl;
    int saltPerToast = saltPerPerson/np;
    int noOfToasts = min(drinkPerToast , min(slicesPerPerson ,saltPerToast ));
    cout<<noOfToasts<<"\n";
}


int main() {
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    toast(n,k,l,c,d,p,nl,np);
    return 0;
}