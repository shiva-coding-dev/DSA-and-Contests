#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;
void solve(string s , int k ){
    int result = 0;
    int n = s.length();
    for(int i = 0 ; i <= n-k ; i++){
        if(s[i] == 'B'){
            int count = 0;
            for(int j = i; j< i+k ; j++){
                if(s[j] == 'B'){
                    count++;
                }
            }
            if(count == k){
                cout<<result<<"\n";
                return;
            }
        }
    }
    int maxB = 0;
    for(int i = 0 ; i <= n-k ; i++){
        int countB = 0;
        for(int j = i; j< i+k ; j++){
            if(s[j] == 'B')countB++;
        }
        maxB = max(maxB , countB);
    }
    result = k-maxB;
    cout<<result<<"\n";
}
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    solve(s,k);
    return 0;
}