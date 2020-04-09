#include <iostream> //include the iostream to enable insertion >> and extraction <<
using namespace std; //use the namespace
int main() {
	
	/*std::cout << "Hello Waki";
	std::cout << std::endl;
	std::cout << 2+2;*/
	
	//short version
	cout << "Hello Waki !" << endl << 2 + 2 << endl << (5.0/308)*10000;

	//local variables
	cout << endl << endl;

	//Declare variables
	cout << "Variables" << endl;
	int i;
	i = 3; //initialize the variable
	cout << i << endl;

	int j =2; //declare and initialize the variable
	cout << j << endl;


	double f = 4.9;
	cout << f << endl;

	f = 9.0 / 5.0; //you must make one a float
	cout << f << endl;

	auto a = 20.8 / 3; //The complier assigns the correct type
	cout << a << endl;

	//Flow of Control
	cout << "Flow of control" << endl;

	return 0;
} 