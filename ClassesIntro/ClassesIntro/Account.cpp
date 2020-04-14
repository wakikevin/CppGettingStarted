//the account class declaration
#include <vector> //include the vector library
#include <string> //include the string library
#include "Account.h" //include the Account definition

using namespace std; //use the standard namespace

//implement the functions

 //the constructor
Account::Account(void):balance(0) {
}

//display the transaction report
vector<string> Account::report() {
    vector<string> report;
    report.push_back("Balance is : " + to_string(balance));
    report.push_back("Transactions: ");

    //loop throught the transactions and append to the report
    for (auto item : log) {
        report.push_back(item.report());
    }
    report.push_back("-------------------------");

    return report;
}
//deposit money and increment balance
bool Account::deposit(int amount) { 
    //check for amounts
    if (amount > 0) {
        balance += amount; //increment the balance
        //create a log entry
        log.push_back(Transaction(amount, "Deposit"));

        return true;
    }
    else {
        return false;
    }
}
//withdraw and reduce balance
bool Account::withdraw(int amount) { 
    //check for amounts
    if (amount > 0) {
        if (balance >= amount) {
            balance -= amount; //increment the balance
            //create a log entry
            log.push_back(Transaction(amount, "Withdrawal"));

            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}
