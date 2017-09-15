#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	int number, i;
	i = 1;
	
	cout << "Enter a number: ";
	cin >> number;
	
	while (i <= number) {
		cout << i << " ";
		i++;
	}
	
	cout << endl;
	
	return 0;
}
