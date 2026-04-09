//print even no
#include <iostream>
using namespace std;
void printeven(int n){
    if(n==2){
        cout<<n;
        return ;
    }
    printeven(n-2);
    cout<<n;
}
int main(){
    int n;
cin>>n;
if(n%2==1)
n--;
printeven (n);
}