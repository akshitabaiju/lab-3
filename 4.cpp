#include<iostream>
using namespace std;
void even_odd(int);
int main(){
int n;
cout<<"Enter a number";
cin>>n;
even_odd(n);
return 0;
}
void even_odd(int n)
{
if(n%2==0)
cout<<"Even";
else
cout<<"Odd";
}
