#include <iostream>
using namespace std;

int partition(int arr[],int start,int end){
    int pos=start;
    for(int i=start;i<=end;i++){
        if(arr[i]<=arr[end]){
            swap(arr[i],arr[pos]);
            pos++;
        };
    }
    return pos-1;
}

void quicksort(int arr[],int start,int end){

//base condition
if(start>=end)
    return;

int pivot = partition(arr,start,end);
//left side
quicksort(arr,start,pivot-1);
//right side
quicksort(arr,pivot+1,end);

}
int main(){
int arr[]={10,29,3,1,4,2,6,8,11,9,76};
quicksort(arr,0,10);
for(int i=0;i<11;i++)
cout<<arr[i]<<" ";
}