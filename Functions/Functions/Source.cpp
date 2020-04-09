#include <iostream> //include the io library
using namespace std; //use the standard namespace

//define function that adds two numbers
int add(int x, int y);

//overloading parameters
int add(int x, int y, int z);

//overloading parameter type -- this is risky
bool test(bool x);

bool test(double x);

//void returns nothing
void test(void);

//the main function
int main() {

	//declare a variable and initialize with calling the defined function
	int sum = add(3, 7);
	cout << "3+7 is: " << sum << endl;

	int b = add(3, 7, 2);
	cout << "3+7+2 is: " << b << endl;

	cout << "Test for true is " << test(true) << endl;
	cout << "Test for 4.5 is " << test(4.5) << endl;

	return 0;
}