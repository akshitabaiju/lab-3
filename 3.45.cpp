#include <iostream>
using namespace std;

int main() {
	
	int numOne, numTwo, remOne, remTwo, hcf;
	
	cout << "Enter a number: \n";
	cin >> numOne;
	
	cout << "Enter another number: \n";
	cin >> numTwo;
	
	if (numOne >= numTwo) {
		for (int i = 1; i <= numTwo; i++) {
			remOne = numOne % i;
			remTwo = numTwo % i;
			if (remOne == 0 && remTwo == 0) {
				hcf = i;
			}
		}
	}
	
	else {
		for (int i = 1; i <= numOne; i++) {
			remOne = numOne % i;
			remTwo = numTwo % i;
			if (remOne == 0 && remTwo == 0) {
				hcf = i;
			}
		}
	}
	
	cout << "The highest common factor of the two numbers " << numOne << " and " << numTwo << " is " << hcf << ".\n";
	
	return 0;
}
