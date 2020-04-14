//the account class declaration
#include <vector> //include the vector library
#include <string> //include the string library
#include "Transaction.h" //include the transaction definition

//define the class
class Account {

//declare the private variables and functions
private:
	int balance;
	std::vector<Transaction> log;

///declare the public functions
public:
	Account();
	std::vector<std::string> report();
	bool deposit(int amount);
	bool withdraw(int amount);
	int getBalance() { return balance; } //inline function for shorter functions
};
