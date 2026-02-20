#include <iostream>
using namespace std;
int main()
{int num,rem,mul=1,ans=0;
    cout<<"Enter the number: ";
    cin>>num;
    while(num>0)
    {
        rem=num%2;
        num/=2;
        ans=rem*mul+ans;
        mul*=10;
    }
cout<<ans;
}