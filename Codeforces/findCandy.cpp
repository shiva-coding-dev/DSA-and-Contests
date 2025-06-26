# include<iostream>
using namespace std;
# include<string>

void findCandy(string  path , int pathLength){
    int i = 0 , j = 0 ;
    for(int k = 0 ; k < pathLength ; k++){
        if(path[k] == 'L'){
            i = i-1;
        }else if(path[k]  == 'R'){
            i = i+1;
        }else if(path[k]  == 'U'){
            j = j+1;
        }else if(path[k]  == 'D'){
            j = j-1;
        }

        if(i==1&&j==1){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}



int main() {
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int pathL;
        cin>>pathL;
        string path;
        cin>>path;
        findCandy(path , pathL);
    }
    return 0;
}