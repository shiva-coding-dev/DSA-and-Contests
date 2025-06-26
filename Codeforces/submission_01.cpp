# include<iostream>
# include<string>

using namespace std;

void modernName(string oldName){
    cout<<oldName[0];
    for(int i = 0 ; i<oldName.length() ; i++){
        if(oldName[i]==' '){
            cout<<oldName[i+1];
        }
    }
    cout<<endl;
}

/*
7
united states america
oh my god
i cant lie
binary indexed tree
believe in yourself
skibidi slay sigma
god bless america
*/

int main(){
    int t;
    cin >> t;
    cin.ignore(); // to consume the leftover newline

    while (t--) {
        string nameOfCountry;
        getline(cin, nameOfCountry); // read entire line including spaces
        modernName(nameOfCountry);
    }

    return 0;
}