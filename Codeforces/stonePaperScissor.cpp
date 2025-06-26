#include <iostream>
#include<random>
#include <cstdlib>
#include <ctime> 
using namespace std;
int randomNumber(int min, int max) {
    static random_device rd;
    static mt19937 gen(rd());             
    uniform_int_distribution<> dist(min, max); 
    return dist(gen);
}
int main() {
    cout<<"Welcome to the Game\n";
    int choice;
    
    do{
        srand(time(0));
        int computerMove = randomNumber(0,30);
        string comMove;
        if(computerMove <=10){
            comMove = "Rock";
        }else if(computerMove <=20 && computerMove >10){
            comMove = "Paper";
        }else{
            comMove = "Scissors";
        }
        cout<<"Menu\n-> Press 1 for Rock \n-> Press 2 for Paper \n-> Press 3 for Scissors \n-> Press 4 to Exit the Game\n\n";
        cout<<"Enter the choice ";
        cin>>choice;
        switch(choice){
            case 1:
                if(comMove == "Rock"){
                    cout<<"Computer Move = "<<comMove<<"\nYour Move = Rock \nResult = tie\n";
                }else if(comMove == "Paper"){
                    cout<<"Computer Move = "<<comMove<<"\nYour Move = Rock \nResult = Lost\n";
                }else{
                    cout<<"Computer Move = "<<comMove<<"\nYour Move = Rock \nResult = Won\n";
                }
                break;
            case 2:
                if(comMove == "Rock"){
                    cout<<"Computer Move = "<<comMove<<"\nYour Move = Paper \nResult = Won\n";
                }else if(comMove == "Paper"){
                    cout<<"Computer Move = "<<comMove<<"\nYour Move = Paper \nResult = Tie\n";
                }else{
                    cout<<"Computer Move = "<<comMove<<"\nYour Move = Paper \nResult = Lost\n";
                }
                break;
            case 3:
                if(comMove == "Rock"){
                    cout<<"Computer Move = "<<comMove<<"\nYour Move = Scissor \nResult = Lost\n";
                }else if(comMove == "Paper"){
                    cout<<"Computer Move = "<<comMove<<"\nYour Move = Scissor \nResult = Won\n";
                }else{
                    cout<<"Computer Move = "<<comMove<<"\nYour Move = Scissor \nResult = Tie\n";
                }
                break;
                
            default:
                cout<<"Invalid Choice\n";
        }
    }while(choice!=4);
    return 0;
}