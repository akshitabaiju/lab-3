#include <iostream>
using namespace std;


int main() {
	
	int n;
	
	cout << "Enter week day number: ";
	cin >> n;
	
	if (n == 1) {
		cout << "The day is Monday.";
	}
	
	else if (n == 2) {
		cout << "The day is Tuesday.";
	}
	
	else if (n == 3) {
		cout << "The day is Wednesday.";
	}
	
	else if (n == 4) {
		cout << "The day is Thursday.";
	}
	
	else if (n == 5) {
		cout << "The day is Friday.";
	}
	
	else if (n == 6) {
		cout << "The day is Saturday.";
	}
	
	else if (n == 7) {
		cout << "The day is Sunday.";
	}
	
	else {
		cout << "You entered a wrong number.";
	}
	
	cout << endl;
	
	return 0;
}
