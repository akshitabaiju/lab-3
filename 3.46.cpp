
#include <iostream>
using namespace std;

int main() {
	
	int numOne, numTwo, lcm, mulOne, mulTwo;
	
	cout << "Enter a number: \n";
	cin >> numOne;
	
	cout << "Enter another number: \n";
	cin >> numTwo;
	
	cout << "The lowest common multiple of the two numbers " << numOne << " and " << numTwo <<  " is ";
	
	if (numOne % numTwo == 0) {
		lcm = numOne;
		cout << lcm << ".\n";
		
	}
	
	else if (numTwo % numOne == 0) {
		lcm = numTwo;
		cout << lcm << ".\n";
	}
	
	else {
		for (int i = 1; i <= numTwo; i++) {
			mulOne = numOne * i;
			for (int j = 1; j <= numOne; j++) {
				mulTwo = numTwo * j;
				if (mulOne == mulTwo) {
					cout << mulOne << ".\n";
					return 0;
				}
			}
		}
	}
	
	return 0;
}
