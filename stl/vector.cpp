#include <iostream>
#include <vector>
using namespace std;
int main(){
    //create vector,declare
vector<int>v;
vector<int>v1(5,1);
//size and capacity
cout<<"size of v: "<<v.size()<<endl;
cout<<"size of capacity: "<<v.capacity()<<endl;
v.push_back(2);
v.push_back(3);
v.push_back(10);
cout<<"size of v: "<<v.size()<<endl;
cout<<"size of capacity: "<<v.capacity()<<endl;
//update value
v[1]=5;
cout<<"size of v: "<<v1.size()<<endl;
cout<<"size of capacity: "<<v1.capacity()<<endl;
v1.push_back(8);
cout<<"size of v: "<<v1.size()<<endl;
cout<<"size of capacity: "<<v1.capacity()<<endl;
//delete value from vector
vector<int>vnew;
vnew.push_back(2);
vnew.push_back(31);
vnew.erase (vnew.begin()+2);

}