#include <iostream>
using namespace std;
int pow(int num ,int p){
    //base case
    
if (p==0)
return 1;
    if (p==1)
    return num;
    return num*pow(num,p-1);
    
}
    int main(){
        int num,p;
        cin>>num>>p;
    //num 2 ka power > pow n let's 4
    cout<< pow(num,p);
}
