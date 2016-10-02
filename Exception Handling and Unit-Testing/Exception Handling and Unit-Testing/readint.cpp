#include "readint.h"
#include <stdexcept>
#include <string>
#include <iostream>
#include <limits>
#include <ios>

using namespace std;

int read_int(const string &prompt, int low, int high)
{
	cin.exceptions(ios_base::failbit);
	int num = 0;
	while (true) { // Loop until valid input
		try {
			cout << prompt;
			cin >> num;
			return num;
		}
		catch (ios_base::failure& ex)
		{
			cout << "Bad numeric string -- try again\n";
			// Reset the error flag
			cin.clear();
			// Skip current input line
			cin.ignore(numeric_limits<int>::max(), '\n');
		}
	}
}
