//============================================================================
// Name        : String Inputs
// Author      : FM
// Version     :
// Copyright   : 
// Description : Gets string inputs from user and prints them to console
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	string string1;
	string string2;

	for(int i = 0; i < 3; ++i) {

		cout << "Test " << i + 1 << endl;
		// inputs are taken of a string class type instead of c-style strings
		// to handle all potential string related errors
		cout << "Enter your first input:" << endl;
		getline(cin, string1);

		cout << "Enter your second input:" << endl;
		getline(cin, string2);

		string result = string1 + string2;

		cout << "Your combined outputs are:" << endl;
		cout << result << endl << endl;
	}

	return 0;
}
