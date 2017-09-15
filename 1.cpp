#include<iostream>
using namespace std; 
int main()
{
float cube(float);
float a,c;
cout<<"Enter a number=";
cin>>a;
c=cube(a);
cout<<"Cube="<<c<<endl;
return 0;
}
float cube(float a)
{
float c;
c=a*a*a;
return (c);
}
