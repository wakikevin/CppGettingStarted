//the account class declaration
#include <string> //include the string library

//define the class
class Transaction {

//define the private variables
private:
	int amount;
	std::string type;

//define public variables
public:
	Transaction(int amount, std::string type);
	std::string report();
};
