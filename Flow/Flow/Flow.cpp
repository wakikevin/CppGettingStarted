#include <iostream> // include the iostream library
using namespace std; // using the standard namespace

//the main function
int main() {

	//declare variables
	int i, j;
	bool keepGoing = true;

	//using a for loop declaration, condition, increment
	for (int loop = 0; loop < 10; loop++) {
		cout << loop << " ";
	}

	//use while loop to control when to stop comparing numbers
	while (keepGoing) {

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

		//ask the use if the want to keep going.
		cout << "Do you want to run this again ? ";
		cin >> keepGoing;
	}
	return 0;
}