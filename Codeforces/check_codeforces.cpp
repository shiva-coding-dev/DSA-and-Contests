# include<iostream>
using namespace std;
# include<string>

void checkCodeforces(char letter){
    int ascii = (int)letter;
    if(ascii<97||ascii>122){
        cout<<"Please Enter valid input\n";
    }else{
        string mainWord = "codeforces";
        if(letter == mainWord[0]||letter == mainWord[1]||letter == mainWord[2]||letter == mainWord[3]||letter == mainWord[4]||letter == mainWord[5]||letter == mainWord[6]||letter == mainWord[7]||letter == mainWord[8]||letter == mainWord[9]){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO\n";
        }
    }
    
}
int main() {
    
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        char eLetter;
        cin>>eLetter;
        checkCodeforces(eLetter);
    }
    
    return 0;
}