//swapping between two numbers using call by referance variable
//input a=10,b=15
//output a=10,b=15
#include<iostream>
using namespace std;
void swap(int &p1,int &p2) //p1=address of a, p2=address of b
{
int temp; 
temp=p1; //temp=10
p1=p2; //a=20
p2=temp; //b=10
cout<<"a after swapping ="<<p1<<endl; //20
cout<<"b after swapping ="<<p2<<endl; //10
}
main()
{
int p1,p2;
cout<<"enter two numbers =";
cin>>p1>>p2;
cout<<"a before swapping ="<<p1<<endl; //10
cout<<"b before swapping ="<<p2<<endl; //20
swap(p1,p2);
cout<<"a after swapping ="<<p1<<endl; //20
cout<<"b after swapping ="<<p2<<endl; //10
}


