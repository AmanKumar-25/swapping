//swapping between two numbers using call by value
//input a=10,b=15
//output a=10,b=15
#include<iostream>
using namespace std;
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<"a after swapping ="<<a<<endl; //20
cout<<"b after swapping ="<<b<<endl; //10
}
main()
{
int a,b;
cout<<"enter two numbers =";
cin>>a>>b;
cout<<"a before swapping ="<<a<<endl;  //10
cout<<"b before swapping ="<<b<<endl;  //20
swap(a,b);
}


