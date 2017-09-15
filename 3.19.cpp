#include <iostream>
using namespace std;

int main() {
	
	float physics, chemistry, mathematics, biology, computer, totalMarks, percentage;
	char grade;
	
	cout << "Enter your marks in the following subjects out of 50.\n";
	cout << "Enter your marks in physics: ";
	cin >> physics;
	cout << "Enter your marks in chemistry: ";
	cin >> chemistry;
	cout << "Enter your marks in mathematics: ";
	cin >> mathematics;
	cout << "Enter your marks in biology: ";
	cin >> biology;
	cout << "Enter your marks in computer: ";
	cin >> computer;
	
	totalMarks = physics + chemistry + mathematics + biology + computer;
	percentage = (totalMarks/2.5);
	
	if (percentage >= 90) {
		grade = 'A';
	}
	else if	(percentage >= 80) {
		grade = 'B';
	}
	else if (percentage >= 70) {
		grade = 'C';
	}
	else if (percentage >= 60) {
		grade = 'D';
	}
	else if	(percentage >= 40) {
		grade = 'E';
	}
	else {
		grade = 'F';
	}
	
	cout << "Your overall grade is " << grade << ".\n";
	
	return 0;
}
