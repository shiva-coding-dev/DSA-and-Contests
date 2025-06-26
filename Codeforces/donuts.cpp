#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        long long a,b,c,f,s;
        f = -1 , s = -1;
        cin >>a>>b>>c;
        if(a<c) f= 1;
        if(b*a>c)s = b;
        cout<<f<<" "<<s<<endl;   
    }
    
    return 0;
}
