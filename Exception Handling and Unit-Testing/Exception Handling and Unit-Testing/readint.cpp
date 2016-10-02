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
	if (low >= high) // it will check if low is greater than high 
	{
		throw (invalid_argument("low is greater than high.")); 
	} 

	while (true) { // Loop until valid input
		try {
			cout << prompt;
			cin >> num;
			// checks if the number inputed is in between low and high if not  
			if (num <= low || num >= high)
			{
				throw (range_error("the number you have entered is outside the range ")); 
			}
			return num;
		}
		catch (const range_error &e)
		{
			cout << "the you entered is out of range please try again!" << endl;
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
