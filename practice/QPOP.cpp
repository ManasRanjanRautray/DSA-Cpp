#include <iostream>
using namespace std;
int main()
{int n,count=0;
    cout<<"ENTER THE NUMBER: ";
    cin>>n;
    
       // int count=0;
        while(n){
            count++;
            n=n/10;
        }
        cout<<count;
        //return 0;

    }
