#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	float x,y,z;
	cin>>x;
	cin>>y;
	cin>>z;
	if(x>y>z){cout<<x<<"is the larger number";}
	else if(y>z>x){cout<<y<<"is the larger number";}
	else{cout<<z<<"is the larger number";}
	return 0;
}
