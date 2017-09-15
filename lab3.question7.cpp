#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	char x;
	cin>>x;
	
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z')){cout<<x<<" is an alphabet.";}
	else{cout<<x<<"is not an alphabet.";}
	
	return 0;
}
