#include <bits/stdc++.h>
using namespace std;

void greedy(int n , vector<int> v , vector<int> w , int cap){
    vector<pair< double, int >> p(n);
    for(int i =0 ; i< n ; i++){
        p[i].first = (double)v[i]/w[i];
        p[i].second = i;
    }
    sort(p.rbegin() , p.rend());
    double result = 0.0;
    for(int i =0;i <n ;i++){
        if(cap == 0)break;
        int idx = p[i].second;
        if(w[idx]<=cap){
            result = result+ v[idx];
            cap = cap - w[idx];

        }else{
            result = result+ (double)p[i].first * cap;
            cap = 0;
        }
    }
    cout<<fixed<<setprecision(2)<<result<<endl;
}

int main() {
    int n ;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> w(n);
    for(int i =0; i< n ; i++)cin>>w[i];
    int c ;
    cin>>c;
    greedy(n , v , w , c);
    return 0;
}