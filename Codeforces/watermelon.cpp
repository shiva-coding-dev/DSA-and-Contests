# include<iostream>
using namespace std;
# include<string>
void checkWatermelon(int w){
    if(w%2!=0 || w==2){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
    }
}
int main() {
    int weight;
    cin>>weight;
    checkWatermelon(weight);
    return 0;
}