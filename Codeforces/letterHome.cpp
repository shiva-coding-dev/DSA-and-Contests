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
        int n , s;
        cin>>n>>s;
        vector<int> a(n);
        for(int i = 0 ; i <n ; i++){
            cin>>a[i];
        }
        int Max = a[0] ;
        int Min = a[0];
        for(int i = 0 ; i < n; i++){
            if(a[i]<Min){
                Min = a[i];
            }
        }
        for(int i = 0 ; i < n; i++){
            if(a[i]>Max){
                Max = a[i];
            }
        }
        bool sIsThere = false;
        for(int i = 0 ; i < n; i++){
            if(a[i]== s){
                sIsThere = true;
                break;
            }
        }
        int minStep = 0;
        if (s==Min||s==Max){
            if(Min==Max){
                minStep = 0;
            }else {
                minStep = (2*s)-1;
            }
        }
        else if(s>Max){
            minStep = s-Min;
        }
        else if(s<Min){
            minStep = Max-s;
        }
        else{
            int minPath = min(abs(s-Min) , abs(s-Max));
            int maxPath = max(abs(s-Min) , abs(s-Max));
            if(sIsThere){
                minStep = (((2*minPath))+maxPath);
            }else{
                minStep = minPath+abs(Min-Max);
            }           
        }
        cout<<minStep<<"\n";
    }
    return 0;
}