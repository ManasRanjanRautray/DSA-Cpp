#include <iostream>

using namespace std;
int main()
{
    int arr[6]={2,4,333,4,5,9};
    int start=0 , end=5;
    while (start <end)
    {swap (arr[start],arr[end]);
    start++;
    end--;};
   for (int i=0;i<6;i++)
    cout <<arr[i]<<" ";

}
