#include <iostream>
using namespace std;
int main(){


int row,col;
cout<<"enter the row no: ";
cin>>row ;
cout<<"enter the  col no: ";
cin>>col;

int A[3][3],B[3][3],C[3][3];
//INPUT MATRIX A
cout<<"enter matrix A: ";
for (int i=0;i<row;i++){
    for (int j =0;j<col;j++){
    
        cin>>A[i][j];
    }
}
//input  matrix b
cout<<"Enter matrix B : ";
for (int i=0;i<row;i++){
    for (int j =0;j<col;j++){
        
        cin>>B[i][j];
    }
}
//add both matrix
for (int i=0;i<row;i++){
    for (int j =0;j<col;j++){
        C[i][j]=A[i][j]+B[i][j];
    }
}

for (int i=0;i<row;i++){
    for (int j =0;j<col;j++){
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
}

//print result
return 0;
}
