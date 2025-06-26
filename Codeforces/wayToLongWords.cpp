# include<iostream>
using namespace std;
# include<string>

void abbWord(string word){
    int lengthOfWord = word.length();
    if(lengthOfWord<=10){
        cout<<word<<"\n";
    }else{
        cout<<word[0]<<lengthOfWord-2<<word[lengthOfWord-1]<<"\n";
    }
}
int main() {
    int t ;
    cin>>t;
    cin.ignore();
    while(t--){
        string word;
        cin>>word;
        abbWord(word);
    }
    return 0;
}