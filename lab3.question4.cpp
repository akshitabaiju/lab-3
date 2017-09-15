#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	
	int x;
	cin>>x;
	
	if((x%5==0)&&(x%11==0)){cout<<"is divisible by 5 and 11";}
	else{cout<<"is not divisible by 5 and 11";}
	
	return 0;
}
