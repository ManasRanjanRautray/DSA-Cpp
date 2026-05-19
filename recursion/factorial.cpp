#include <iostream>
using namespace std;
int fact(int n){
    //base case
    if (n==1 || n==0 )
    return 1;


    return n*fact(n-1);
}

int main (){
//factorial of no n
int n;
n=-7;
if (n<0){
    cout<<"factorial doesn't exist\n";
    return  0;
}

cout<<fact(n);
    
}