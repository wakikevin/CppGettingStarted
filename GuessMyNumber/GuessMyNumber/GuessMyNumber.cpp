#include <iostream> //include io library
using namespace std; //use the standard namespace

//the main function
int main() {

	//declare the required variables
	int answer = 10;
	int userAnswer;
	bool continueGame = true;

	//use while loop to control game
	while (continueGame) {

		//ask for user input
		cout << "Guess my number : ";
		cin >> userAnswer;

		//check if the user has got it
		if (userAnswer == answer) {
			cout << "You win ! The answer is " << answer << endl;
			continueGame = false; //end the game
		}
		else {
			//compare to give the user an appropriate message
			if (userAnswer < answer) {
				cout << "Your Guess is less than the answer. Try Again !" << endl;
			}
			else {
				cout << "Your Guess is greater than the answer. Try Again !" << endl;
			}
		}

	}
	return 0;
}