//Check the given password is correct or not.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;

	cout << "Enter your password\n";
	getline(cin, password, '\n');

	if (password == "xyzzy") {
		cout << "Access allowed\n";
	} else {
		cout << "Bad password\n";
		//returning is a convenient way to stop the program
		return 0;
	}

	//continue onward!

}
