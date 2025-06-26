#include<iostream>
#include<vector>
using namespace std;
//4 1 6 1 6 5 6 8 we have to see < 6
int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
	    int n , x;
	    cin>>n>>x;
	    vector<int> a(n);
	    for(int i = 0 ; i < n ; i++){
	        cin>>a[i];
	    }
	    int count = 0 ;
	    for( int i = 0 ; i < n ; i++){
	        if(a[i]<x){
	            count = i+1;
	        }
	    }
	    cout<<count<<"\n";
	}
    return 0 ;
}
