#include <iostream>
using namespace std;


int main() {
	
	double firstAngle, secondAngle, thirdAngle;
	
	cout << "Enter the first angle in degrees: ";
	cin >> firstAngle;
	
	cout << "Enter the second angle in degrees: ";
	cin >> secondAngle;
	
	cout << "Enter the third angle in degrees: ";
	cin >> thirdAngle;
	
	if (firstAngle + secondAngle + thirdAngle == 180) {
		cout << "The angles form a triangle.";
	}
	
	else {
		cout << "The angles do not form a triangle.";
	}
	
	cout << endl;
	
	return 0;
}
