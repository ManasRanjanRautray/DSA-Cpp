#include <iostream>
using namespace std;
int main()
{ 
    int x;
    int num,ans=0,rem;
    cout<<"Enter the number: ";
    cin>>x;
    num=x;
    while(num>0)
    {
        rem=num%10;
    num/=10;
ans=ans*10+rem;
}
if (x==ans)
cout<<"Pallindrome";
else
cout<<"not";
}