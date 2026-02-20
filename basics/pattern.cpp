#include <iostream>
using namespace std;
int main()
// {
//     int row,col;
//     for (row=1;row<=5;row=row+1)
//     {
//         for (col=1;col<=5;col=col+1)
//         cout<<col*col<<" ";
    
//        cout<<endl;
//     }
// }
// {
//     int row,col;
//     for (row=1;row<=8;row=row+1)
//     {
//         for (col=-1;col<=row;col=col+1)
//         cout<<col<<" ";
//     cout<<endl;
// }}
// {
//     int row,col;
//     for (row=1;row<=5;row=row+1)
//     {
//         for(col=5;col>=5-(row-1);col=col-1)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
    
// }
// {
//     int r,c,n;
    
//     cout<<" Enter the  number: ";
//     cin>>n;
//     for(r=1;r<=n;r=r+1)
//     {
//         for (c=1;c<=n-r;c=c+1)
//         //space print
//             cout<<"  ";
//             //number print
//         for(c=1;c<=r;c=c+1)
//         {
//             cout<<c<<" ";
//         }
//            cout<<endl;


// }}
// {
//     int row,col,n;
//     cout<<"Enter the number: ";
//     cin>>n;
    
//     for(row=1;row<=n;row=row+1)
//     {
//         //space
//         for(col=1;col<=n-row;col=col+1)
//         cout<<" ";
//         //number
//         for (col=row;col>=1;col=col-1)
//         cout<<col;
//         cout<<endl;
//     }

// }
// {

//     int row,col,n;
//     cout<<" Enter the number: ";
//     cin>>n;
//     for (row=n;row>=1;row=row-1)
//     {
//         for (col=1;col<=n-row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=2*row-1;col=col+1)
//         cout<<"* ";
//         cout<<endl;

        
//     }

/*{
    int row,col,n;
    cout<<" Enter the number: ";
    cin>>n;
    for(row=1;row<=n;row=row+1)
    {
        // for space print
        for (col=1;col<=n-row;col=col+1)
        cout<<" ";
        // for star print
        for(col=1;col<=row;col=col+1)
        cout<<" manas";
        cout<<endl;
    }
for(row=n;row>=1;row=row-1)
    {
        // for space print
        for (col=1;col<=n-row;col=col+1)
        cout<<" ";
        // for star print
        for(col=1;col<=row;col=col+1)
        cout<<" sudip";
        cout<<endl;
}}*/
/*{
   int row,col,n;
   cout<<"Enter the number: ";
   cin>>n;
   char name='A';
  { for(row=1;row<=n;row++)
   {//for space print
    for (col=1;col<=n-row;col++)
    cout<<" ";
    //for char print
    for (name='A';name<='A'+row-1;name++)

        cout<<name;
        cout<<endl;
    
   }
}}*/
//pyramid pattern
{
    int row ,col,n;
    cout<<" Enter the number: ";
    cin>>n;
    for ( row=1;row<=n;row++)
    {
        for (col=1;col<=n-row;col++)
        cout<<"  ";
        for (col=1;col<=(2*row)-1;col++)
        cout<< " *"<<"";
        
    cout<<endl;}
    for ( row=n-1
        ;row>=1;row--)
    {
        for (col=1;col<=n-row;col++)
        cout<<"  ";
        for (col=1;col<=(2*row)-1;col++)
        cout<< " *"<<"";
        
    cout<<endl;}
}