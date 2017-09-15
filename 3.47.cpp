#include <iostream>
using namespace std;

int main() {
	
	int number;
	int numOfDivisors = 0;
	cout << "Enter a number: ";
	cin >> number;
	
	
	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			numOfDivisors++;
		}
	}
	
	if (numOfDivisors == 2) {
		cout << "The number " << number << " is a prime.";
	}
	else {
		cout << "The number " << number << " is not a prime.";
	}
	
	return 0;
}
