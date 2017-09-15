#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int number, i;
	
	cout << "Enter a number: ";
	cin >> number;
	
	i = number;
	
	while (i >= 1) {
		cout << i << " ";
		i--;
	}
	
	cout << endl;
	
	return 0;
}
