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
        int n ;
	    cin>>n;
	    vector<int> a(n);
	    for(int second=0;second<n;second++)cin>>a[second];
        int initialtime = a[0];
        int finaltime = INT_MAX;
	    for(int i=0;i<n;i++){
            int second = i;
            int peopleremain =(a[i] - second);
            if(peopleremain<0){
                peopleremain = 0;
            }
            finaltime = min(finaltime ,(i+peopleremain));
        }
        cout<<finaltime<<"\n";
    }
    return 0;
}