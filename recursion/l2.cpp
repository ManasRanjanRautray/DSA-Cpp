#include <iostream>
using namespace std;
void printeven(int num,int n){
    if(num>n){
        return;
    }
    cout<<num<<" ";
    printeven(num+2,n);
}
int main(){
    //print even no from 1 to n:
    int n ;
    cin>>n;
    printeven(2,n);
}