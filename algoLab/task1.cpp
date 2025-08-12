#include <bits/stdc++.h>
using namespace std;

typedef struct Student{
    string name;
    int roll;
    int marks;
}Student;

void insertionSort (vector<Student> &stud){
    int n = stud.size();
    for(int i = n-1 ; i>=0 ; i--){
        Student temp ;
        temp.marks= stud[i].marks;
        temp.name= stud[i].name;
        temp.roll= stud[i].roll;

        int j=i+1 ;
        while(j<n && stud[j].marks>temp.marks){
            stud[j-1].marks = stud[j].marks;
            stud[j-1].name = stud[j].name;
            stud[j-1].roll = stud[j].roll;
            j++;
        }
        stud[j-1].marks= temp.marks;
        stud[j-1].roll= temp.roll;
        stud[j-1].name= temp.name;
    }
}

int main() {
    vector<Student> students;
    for(int i = 0 ; i< 5 ; i++){
        Student stud;
        cout<<"Enter the Details for student 1 = \n";
        string name ;
        int marks , roll;
        cin>>name;
        cin>>roll>>marks;
        stud.name = name;
        stud.roll = roll;
        stud.marks = marks;
        students.push_back(stud); 
    }
    insertionSort(students);
    for(int i= 0; i < students.size() ; i++){
        cout<<"Details in descreasing Oredr\n";
        cout<<students[i].name<<" "<<"Roll - "<<students[i].roll<<"   Marks - "<<students[i].marks<<"\n";
    }
    return 0;
}