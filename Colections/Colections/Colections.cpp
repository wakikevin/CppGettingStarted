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

	//create a vector of strings
	vector<string> vs;
	cout << "Enter three words : ";
	for (int i = 0; i < 3; i++) {
		string s;
		cin >> s;
		vs.push_back(s);
	}

	//display the words
	for (auto item : vs) {
		cout << item << " ";
	}
	cout << endl;

	//get the size of the vector
	cout << "int vector vi has " << vi.size() << " elements. " << endl;

	//change element values in a vector
	vi[5] = 3;
	vi[6] = -1;
	//loop to display vector items
	for (auto item : vi) {
		cout << item << " ";
	}
	cout << endl;

	///display using indexes
	for (unsigned int i = 0; i < vi.size(); i++) {
		cout << vi[i] << " ";
	}
	cout << endl;

	///display using begin and end iterators
	for (auto i = begin(vi); i != end(vi); i++) {
		cout << *i << " ";
	}
	cout << endl;

	//sorting a vector
	sort(begin(vs), end(vs));
	//display the words
	for (auto item : vs) {
		cout << item << " ";
	}
	cout << endl;

	//count
	int threes = count(begin(vi), end(vi), 3);
	cout << "The vector of ints has " << threes << " elements of value 3" << endl;
	int tees = count(begin(vs[0]), end(vs[0]), 't');
	cout << "The first word has " << tees << " letter t(s)" << endl;
	return 0;
}