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
        int n,m;
        cin>>n>>m;
        int lights = 0;
        int minn = min(m,n);
        int maxx = max(m,n);
        if(minn%2==0)lights = maxx*(minn/2);
        else if(minn%2!=0 && maxx%2!= 0)lights = maxx*(minn/2)+(maxx/2)+1;
        else lights = maxx*(minn/2)+(maxx/2);
        cout<<lights<<"\n";
    }
    return 0;
}