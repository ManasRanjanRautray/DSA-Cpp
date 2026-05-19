#include <iostream>
using namespace std;
int sum(int n){
    //base case
    if(n==1)
    return 1;

    return n+sum(n-1);
}
int main(){
    //sum of n 
    int n;
    n=5;
    cout<<sum(n);
}