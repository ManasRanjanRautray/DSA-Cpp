#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
vector<int> nums(n);
cout<<"enter the number: "; 
for(int i=0;i<n;i++){
    
    cin>> nums[i];
}  

    int max=0,smax=0;

    for(int i=0;i<n;i++){
        if(max<nums[i]){
            smax=max;
            max=nums[i];
        }
        else if(smax<nums[i]){
            smax=nums[i];

        }
        
    }
    cout<< (max-1)*(smax-1);
        return 0;

}