#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int sum, input;
	int number = 1;
	
	sum = 0;
	cout << "Enter a number: ";
	cin >> input;
	
	while (number <= input) {
		sum += number;
		number += 2;
	}
	
	cout << "The sum of all odd numbers upto " << input << " is " << sum << ".";
	
	cout << endl;
	
	return 0;
}
