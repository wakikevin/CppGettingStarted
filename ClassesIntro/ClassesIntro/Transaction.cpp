//the account class declaration
#include "Transaction.h" //include the transaction definition

using namespace std; //use the standard namespace

//define the constructor
Transaction::Transaction(int amount, string type):amount(amount),type(type) {

}

//define the report
string Transaction::report() {
	string report;
	report += "  ";
	report += type;
	report += "  ";
	report += to_string(amount);

	return report;
}
