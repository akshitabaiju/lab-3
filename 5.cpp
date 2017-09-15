#include <iostream>
#include <cmath>
using namespace std;

string prime(int number) {
	int numOfDivisors = 0;
	
	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			numOfDivisors++;
		}
	}
	
	if (numOfDivisors == 2) {
		return "The number is a prime.";
	}
	else {
		return "The number is not a prime.";
	}
}
