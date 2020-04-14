#include <iostream> //include the iostream library
#include <string> //include the string library
#include <vector> //include the vector library
#include <algorithm> //include the algorithm library - for sorting and counting

using namespace std; //use the standard namespace

//main function
int main() {

	//declare variables
	vector<int> vi;

	//loop and add items to vector
	for (int i = 0; i < 10; i++) {
		vi.push_back(i); //push items to vector
	}

	//loop to display vector items
	for (auto item : vi) {
		cout << item << " ";
	}
	cout << endl;
	return 0;
}