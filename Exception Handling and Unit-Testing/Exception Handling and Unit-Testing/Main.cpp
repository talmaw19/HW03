#include <iostream>
#include <stdexcept>
#include "readint.h"
using namespace std;

int main()
{

	int low, high;
	cout << "Enter the range of values to read.\n";
	cout << "high: ";
	cin >> high;
	cout << "low: ";
	cin >> low;


	try
	{
		int number = read_int("Please enter a number within the range: ", low, high);
		cout << "You entered " << number << endl;


	}
	catch (invalid_argument &e) {

		cerr << "Exception: You supplied an invalid argument for read_int! Try Again! \n";
	}
	/*	catch (range_error &e)
		{
			cerr << " "
		}*/
	catch (ios_base::failure &ex) // 
	{
		cout << " you have entered out of the range of the number, please enter an integer, no symbols " << endl; 
		cin.clear();
		cin.ignore(numeric_limits<int>::max());
	}
}