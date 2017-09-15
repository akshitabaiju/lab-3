#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int input, i, multiple;
	i = 1;
	
	cout << "Enter a number: ";
	cin >> input;
	
	while (i <= 10) {
		multiple = input * i;
		cout << input << " times " << i << " is " << multiple << ".\n";
		i++;
	}
		
	return 0;
}
