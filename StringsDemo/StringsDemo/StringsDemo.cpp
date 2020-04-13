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

    return 0;
}
