#include <iostream> // include the iostream library
using namespace std; // using the standard namespace

//the main function
int main() {

	//declare variables
	int i, j;

	//get user input
	cout << "Enter a number:  ";
	cin >> i;
	cout << "You entered : " << i << ". Enter another number: ";
	cin >> j;

	//use if statement to control display
	if (i < j) {
		cout << "The first number ," << i << " is less than the second number, " << j << endl;
	}
	else {
		cout << "The first number ," << i << " is greater than the second number, " << j << endl;
	}
	return 0;
}