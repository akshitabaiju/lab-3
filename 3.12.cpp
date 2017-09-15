#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int m;
	
	cout << "Enter the number of the month: ";
	cin >> m;
	
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		cout << "The number of days in the month is 31.";
	}
	
	else if (m == 4 || m == 6 || m == 9 || m == 11) {
		cout << "The number of days in the month is 30.";
	}
	
	else if (m == 2) {
		cout << "The number of days in the month is 28 or 29, depending on whether it is a leap year or not.";
	}
	
	else {
		cout << "You didn't enter a valid month number.";
	}

	cout << endl;
	
	return 0;
}
