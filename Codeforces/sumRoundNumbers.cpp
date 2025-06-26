# include<iostream>
using namespace std;
# include<string>
# include<cmath>

void sumOfRound(int n){
    int count = 0;
    int temp = n;
    int i = 1;

    while (temp > 0) {
        if (temp % 10 != 0) count++;
        temp /= 10;
    }
    cout << count << endl;
    

    int digits = (n == 0) ? 1 : log10(abs(n)) + 1;
    i = pow(10,digits-1);
    while(i>=1){
        int data = (n/i)*i;
        if(data!=0){
            cout<<data<<" ";
        }
        n = n%i;
        i = i/10;
    }
    cout<<endl;
    
}
int main() {
    int t;
    cin >> t;
    cin.ignore(); // to consume the leftover newline

    while (t--) {
        int num;
        cin>>num;
        sumOfRound(num);
    }
   
    return 0;
}