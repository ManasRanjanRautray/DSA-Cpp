#include <iostream>
using namespace std;


float Swap(float &a,float &b)
{
    float c;
    c=a;
    a=b;
    b=c;
}
int main()
{
    float a,b;
    cin>>a>>b;
    Swap (a,b);
    cout <<a<<" "<<b<<endl;
    float f1=5.6,f2=3.5;
    Swap (f1,f2);
    cout <<f1<<" "<<f2;}