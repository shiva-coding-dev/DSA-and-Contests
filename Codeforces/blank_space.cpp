# include<iostream>
using namespace std;
# include<string>
void blankSpace(int a[] , int size){
    for (int i = 0; i < size; i++) {
        if (a[i] != 0 && a[i] != 1) {
            cout << "Please enter binary array\n";
            return;
        }
    }
    int currCount = 0 ;
    int maxCount = 0 ;
    for(int i = 0 ; i < size ; i++){
        if(a[i]==0){
            currCount++;
            if(currCount>maxCount){
                maxCount = currCount;
            }
        }else{
            currCount = 0 ;
        }
    }
    cout<<maxCount<<"\n";
}

int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n ;
        cin>>n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
        }
        blankSpace(a , n);
    
    }
    return 0;
}