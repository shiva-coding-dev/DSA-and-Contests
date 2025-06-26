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
        long long w,h;
        cin>>w>>h;
        int k0;
        cin>>k0;
        vector<int> x0(k0);
        for(int i = 0 ; i < k0 ; i++){
            cin>>x0[i];
        }
        int kh;
        cin>>kh;
        vector<int> xh(kh);
        for(int i = 0 ; i < kh ; i++){
            cin>>xh[i];
        }

        int k0y;
        cin>>k0y;
        vector<int> y0(k0y);
        for(int i = 0 ; i < k0y ; i++){
            cin>>y0[i];
        }
        int kw;
        cin>>kw;
        vector<int> yw(kw);
        for(int i = 0 ; i < kw ; i++){
            cin>>yw[i];
        }
        int baseX = max((x0[k0-1] - x0[0]) , (xh[kh-1] - xh[0]));
        long long area1 = baseX*h;
        int baseY = max((y0[k0y-1]-y0[0]) , yw[kw-1]-yw[0]);
        long long  area2 = baseY*w;
        long long finalAnswer = max(area1 , area2);
        cout<<finalAnswer<<"\n";
    }
    return 0;
}