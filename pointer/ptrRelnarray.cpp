//#include<bits/htdc.h>
#include<iostream>
using namespace std;
int main(){
    // //pointer address contain karta he.
    // int arr[]={11,7,8,12,14};
    // int *ptr =&arr[0];
    // int *ptr2=&arr[1];
    // cout<<ptr;
// int arr[5]={11,7,8,12,14};
// int *ptr=arr;
// cout<<arr[2]<<endl;
// cout<<*(ptr+2)<<endl;
//>> all address print
int arr[5]={11,7,8,12,14};
for(int i=0;i<5;i++){
    cout<<&arr+i<<endl;
}
//>> all address value print
int ar[5]={11,7,8,12,14};
for(int i=0;i<5;i++){
    cout<<ar[2]<<endl;
}

//>> all address print
int arry[5]={11,7,8,12,14};
for(int i=0;i<5;i++){
    cout<<*(arry+i)<<endl;
}
}
