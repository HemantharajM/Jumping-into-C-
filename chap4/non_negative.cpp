//This program reads the user input and tells its negative or non_negative number.

#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "Enter a number: ";
	cin  >> x;

	if (x >= 0) {
		cout << "You entered a non_negative number\n";
	} else {
		cout << "You entered a negative number\n";
	}

}
