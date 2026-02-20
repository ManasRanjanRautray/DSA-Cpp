#include <iostream>
using namespace std;
int main()
{
    int num,ans=0,rem;
    cout<<"Enter the number: ";
    cin>>num;
    while(num>0)
    {rem=num%10;
    num/=10;
ans=ans*10+rem;
}cout<< ans;
}