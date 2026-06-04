//for lower cases only
#include <iostream>
using namespace std;
//index right side se start 
int countvowel(string str , int index){
    if(index==-1){
        return 0;
    }
    if(str[index]=='a'|| str[index]=='e'|| str[index]=='i'|| str[index]=='o'|| str[index]=='u')
    return 1+ countvowel(str,index-1);

else
return countvowel(str,index-1);
}
int main(){
string str = "manisha";
cout<<countvowel(str,6);
}
