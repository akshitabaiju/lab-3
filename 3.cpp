#include<iostream>
using namespace std;
int main(){
float max(float,float);
float min(float,float);
float a,b,m,M;
cout<<"Enter two numbers";
cin>>a>>b;
M=max(a,b);
m=min(a,b);
cout<<"Maximum="<<M<<"Minimum="<<m<<endl;
return 0;
}
float max(float a,float b)
{
float M;
if(a>b)
M=a;
else
M=b;
return (M);
}
float min(float a,float b)
{
float m;
if(a>b)
m=b;
else
m=a;
return (m);
}
