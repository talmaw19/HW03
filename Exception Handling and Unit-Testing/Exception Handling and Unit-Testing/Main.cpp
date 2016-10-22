io#include <iostream>
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


	try // asks to user to put a number within the valid range.. and displays the number they have inputed 
	{
		int number = read_int("Please enter a number within the range: ", low, high); 
		cout << "You entered " << number << endl;


	}// if number not in range it catches 
	catch (invalid_argument &e) { // catches the error and displays the user that they put a number putside the range 

		cerr << "Exception: You supplied an invalid argument for read_int! Try Again! \n";
	}

}
