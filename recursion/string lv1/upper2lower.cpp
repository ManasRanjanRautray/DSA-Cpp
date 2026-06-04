#include <iostream>
using namespace std;
void UpperToLower(string &name, int index){
    //last index se start karenge
    //base case
    if(index==-1){
        return;
    }
    //convert
    name[index]=name[index]-'A'+'a';
    UpperToLower(name,index-1);
}
int main(){
    string name="SANAM";
    UpperToLower(name,4);
    cout<<name;

}