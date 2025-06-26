#include <iostream>
#include <vector>
#include <cmath>
# include<string>
using namespace std;
void midTime(string a , string b){
    int hours1 = (a[0] -'0')*10+(a[1] - '0');
    int minutes1 = (a[3]-'0')*10+(a[4] - '0');
    int totalMinutes1 = hours1*60+minutes1;
    int hours2 = (b[0] -'0')*10+(b[1] - '0');
    int minutes2 = (b[3]-'0')*10+(b[4] - '0');
    int totalMinutes2 = hours2*60+minutes2;
    int differMin = totalMinutes2 - totalMinutes1;
    int newMin = totalMinutes1+(differMin)/2;
    int newHours = newMin/60;
    int newMinutes = newMin%60;
    string H = "",M = "";

    if(newHours<10){
        H.push_back('0');
    }
    if(newMinutes<10){
        M.push_back('0');
    }
    string h = to_string(newHours);
    string m = to_string(newMinutes);
    string t = H+h;
    string q = M+m;
    vector<char> finalTime;
    for(char c:t){
        finalTime.push_back(c);
    }
    finalTime.push_back(':');
    for(char c:q){
        finalTime.push_back(c);
    }
    for(char c:finalTime){
        cout<<c;
    }
    cout<<endl;
}

int main() {
    string a,b;
    cin>>a>>b;
    midTime(a,b);
    return 0;
}