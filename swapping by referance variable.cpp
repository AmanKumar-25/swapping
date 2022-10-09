//referance variable
#include<iostream>
using namespace std;
main()
{
int a=10;
cout<<a<<endl;

int &b=a;
cout<<b<<endl;

b=20;
cout<<a<<endl;
}
