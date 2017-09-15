#include <iostream>
using namespace std;

int main() {
	
	int number, factor, numOfDivisors, primeFactor;
	numOfDivisors = 0;
	primeFactor = 0;
	
	cout << "Enter a number: ";
	cin >> number;
	
	cout << "The prime factors of " << number << " are: \n";
	
	for (int i = 2; i <= number/2; i++) {
		if (number % i == 0) {
			factor = i;
			for (int j = 1; j <= factor; j++) {
				if (factor % j == 0) {
					numOfDivisors++;
				}
			}
			if (numOfDivisors == 2) {
				primeFactor = factor;
				cout << factor << " ";
			}
		}
		numOfDivisors = 0;
	}
	
	if (primeFactor == 0) {
		cout << number << " has no prime factors as it is a prime number.";
	}
	
	cout << endl;
	
	return 0;
}
