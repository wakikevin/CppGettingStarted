#include <iostream> //include the iostream library
#include <string> //include the string library

using namespace std; //use the standard namespace

//main funtion
int main() {
	//declare the variables
	string strOne, strTwo;
	int strOneLen, strTwoLen;

	//ask for the user input
	cout << "Enterthe first string: ";
	cin >> strOne;
	cout << "Enter the second string: ";
	cin >> strTwo;

	//get the length of the strings
	strOneLen = strOne.length();
	strTwoLen = strTwo.length();

	//comapre the lenths
	if (strOneLen > strTwoLen) {
		cout << "The first string " << "\"" + strOne + "\"" << " is longer.";
	}
	if (strOneLen < strTwoLen) {
		cout << "The second string " << "\"" + strTwo + "\"" << " is longer.";
	}
	if (strOneLen == strTwoLen) {
		cout << "The two strings are of same length.";
	}
	return 0;
}