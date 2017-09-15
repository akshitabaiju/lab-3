#include <iostream>
using namespace std;

int main() {
	
	int number;
	int numOfDivisors = 0;
	cout << "Enter a number: \n";
	cin >> number;
	
	
	for (int i = 2; i <= number; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				numOfDivisors++;
			}
		}
		if (numOfDivisors == 2) {
			cout << i << endl;
		}
		numOfDivisors = 0;
	}
	
	return 0;
}
