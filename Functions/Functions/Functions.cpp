#include <iostream> //include the io library
using namespace std; //use the standard namespace

//define function that adds two numbers
int add(int x, int y) {
	return x + y; //return the sum
}

//the main function
int main() {

	//declare a variable and initialize with calling the defined function
	int sum = add(3, 7);
	cout << "3+7 is: " << sum << endl;
	return 0;
}