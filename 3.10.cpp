#include<iostream>
using namespace std;
int main() {
	
	char input;
	cout << "Enter an alphabet(lower case or upper case): ";
	cin >> input;
	
	if (input >= 'a' && input <= 'z') {
		cout << "You entered a lower case alphabet.";
	}
	
	else if (input >= 'A' && input <= 'Z') {
		cout << "You entered an uppercase alphabet.";
	}
	
	else {
		cout << "You didn't enter an alphabet.";
	}
	
	cout << endl;
	
	return 0;
}
