#include <iostream> //include the io library
using namespace std; //use the standard namespace

//define function that adds two numbers
int add(int x, int y) {
	return x + y; //return the sum
}

//overloading parameters
int add(int x, int y, int z) {
	return add(x,y)+z; //return the sum
}

//overloading parameter type -- this is risky
bool test(bool x) {
	return x;
}
bool test(double x) {
	return x > 0; //or return x > 0
}

//void returns nothing
void test(void) {
	return;
}

//the main function
int main() {

	//declare a variable and initialize with calling the defined function
	int sum = add(3, 7);
	cout << "3+7 is: " << sum << endl;

	int b = add(3, 7,2);
	cout << "3+7+2 is: " << b << endl;

	cout << "Test for true is " << test(true) << endl;
	cout << "Test for 4.5 is " << test(4.5) << endl;

	return 0;
}