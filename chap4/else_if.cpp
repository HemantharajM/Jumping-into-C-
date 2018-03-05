//Return negative, non_negative and zero based on user input.

#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "Enter a number: ";
	cin  >> x;

	if ( x > 0 ) {
		cout << "You entered a positive number\n";
	} else if (x == 0) {
		cout << "You entered a zero number\n";
	} else {
		cout << "You entered a negative number\n";
	}

}
