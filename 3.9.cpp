#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	char input;
	cout << "Enter your character: ";
	cin >> input;
	
	if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
		cout << "You entered an alphabet.";
	}
	
	else if (input >= '0' && input <= '9') {
		cout << "You entered a digit.";
	}
	
	else {
		cout << "You entered a special character.";
	}
	
	cout << endl;
	
	return 0;
}
