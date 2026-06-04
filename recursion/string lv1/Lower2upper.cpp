#include<iostream>
using namespace std;
void LowertoUpper (string &name , int index){
//base case
if(index==-1){
    return ;

}
//convert l to U
name[index]=name[index]-'a'+'A';
LowertoUpper(name,index-1);
}

int main(){
    string name="manas";
LowertoUpper(name,4);
cout<<name;
}