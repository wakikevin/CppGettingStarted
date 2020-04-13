#include <iostream> //include the iostream library
#include <string> //include string library

using namespace std; //use the statndard namespace

int main()
{
    //declare variables
    string name, greeting;

    //ask for user input
    cout << "What is your name ? ";
    cin >> name;

    //display the text
    greeting = "Hello, " + name;

    //check for name
    if (name == "waki") {
        greeting += ", I know you!";
    }
    cout << greeting << endl;

    //string manipulation
    int strLength = greeting.length();
    cout << "\"" + greeting + "\" is " << strLength << " characters long." << endl;

    //get the first space
    auto space = greeting.find(" ");
    string beginnig = greeting.substr(space + 1); //get the substring upto the first space
    cout << beginnig << endl;

    //check if we have correct substring
    if (beginnig == name) {
        cout << "Expected Result." << endl;
    }



    return 0;
}
