//the account class declaration
#include <iostream> //including the iostream library
#include <vector> //include the vector library
#include <string> //include the string library
#include "Account.h" //include the Account definition

using namespace std; //use the standard namespace

//main function
int main() {
	//create a n account instancet
	Account a1;

	//deposit money to it
	a1.deposit(500);
	cout << "After deposit of amount 500 " << endl;
	for (auto item : a1.report()) {
		cout << item << endl;
	}
	a1.withdraw(400);
	if (a1.withdraw(900)) {
		cout << "Withdrawal of amount 900 after 400 " << endl;
	}
	cout << "After of amount 900 after 400 " << endl;
	for (auto item : a1.report()) {
		cout << item << endl;
	}

	return 0;
}