#include <iostream>
using namespace std;
//reverse the string 
//using start end pointer 
//pass by reference required 
void rev(string &str, int start, int end){//pass by reference for add change value in main func
if(start>=end){
    return ;
}
//swap value 
char c= str[start];
str[start]=str[end];
str[end]=c;
rev(str,start+1,end-1);
}
 
int main(){
 string str ="manas";
 rev(str,0,14);
 cout<<str;
}