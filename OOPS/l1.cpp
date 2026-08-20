#include <iostream>
using namespace std;

class Student{
    public://access modifier
    string name;
    int age,roll_no;
    string grade;
};
int main(){
    Student S1;
    S1.name= "manas";
    S1.age= 10;
    S1.roll_no=21;
    S1.grade="A++";

cout<<S1.age<<" ";
   

}