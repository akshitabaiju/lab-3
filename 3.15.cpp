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
	
	if (firstSide + secondSide > thirdSide) {
		if (secondSide + thirdSide > firstSide) {
			if (firstSide + thirdSide > secondSide) {
				cout << "The three sides can form a triangle.";
			}
			else {
				cout << "The three sides can not form a triangle.";
			}
		}
		else {
			cout << "The three sides can not form a triangle.";
		}
	}
	
	else {
		cout << "The three sides can not form a triangle.";
	}
	
	cout << endl;
	
	return 0;
}
