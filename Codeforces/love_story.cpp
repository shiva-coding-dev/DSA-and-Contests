# include<iostream>
using namespace std;
# include<string>


void check_diff(string word ){
    string mainWord = "codeforces";
    int count = 0 ;
    if(word.length()==10){
        for(int i = 0 ; i < mainWord.length(); i++){
            if(word[i]!=mainWord[i]){
                count++;
            }
        }
    }else{
        cout<<"Invalid Input\n";
    };

    cout<<count<<"\n";
}

int main() {
    int t;
    cin>> t;
    cin.ignore();
    while(t--){
        string wordEnter;
        cin>>wordEnter;
        check_diff(wordEnter);
    }
    return 0;
}