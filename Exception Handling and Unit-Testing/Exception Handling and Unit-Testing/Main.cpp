#include <iostream>
#include <stdexcept>
#include "readint.h"
using namespace std;

int main()
{
	
	do {
		try
		{
			int low, high;
	cout << "Enter the range of values to read.\n";
	cout << "high: ";
	cin >> high;
	cout << "low: ";
	cin >> low;
			int number = read_int("Please enter a number within the range: ", low, high);
			cout << "You entered " << number << endl;

			throw invalid_argument("out of range");
		}
		catch (invalid_argument &e) {

			cerr << "Exception: You supplied an invalid argument for read_int! Try Again!   \n";
		}
	} while (true);
	//	// try again
	//	
	//}
}

