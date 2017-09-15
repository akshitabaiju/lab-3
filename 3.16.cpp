#include <iostream>
using namespace std;


int main() {
	
	double firstSide, secondSide, thirdSide;
	
	cout << "Enter the length of the first side in centimeters: ";
	cin >> firstSide;
	
	cout << "Enter the length of the second side in centimeters: ";
	cin >> secondSide;
	
	cout << "Enter the length of the third side in centimeters: ";
	cin >> thirdSide;
	
	if (firstSide == secondSide && secondSide == thirdSide) {
		cout << "The triangle is an equilateral triangle.";
	}
	
	else if (firstSide == secondSide || secondSide == thirdSide || firstSide == thirdSide) {
		cout << "The triangle is an isosceles triangle.";
	}
	
	else {
		cout << "The triangle is a scalene triangle.";
	}
	
	cout << endl;
	
	return 0;
}
