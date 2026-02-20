#include <iostream>
using namespace std;
int BinarySearch(int arr[],int n,int x){
    int start=0,end=n-1,mid;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if (arr[mid]==x)
        
            return mid;
            //break;
        else if (arr[mid]<x)
        
           start=mid+1;
            /* code */
        else
        end=mid-1;
        
        /* code */
    }
    return -1;
}
main()
{
    int arr[1000];
    int n;
    cout<<" Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements in array: ";
    for(int i=0;i<n;i++)
    
    cin>>arr[i];
int x;
cout<<"Enter the value: ";
cin>>x;

cout<<BinarySearch(arr,n,x)<<endl;
return 0;
}