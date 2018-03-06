//password prompt that gives a user only certain number of password entry attempts.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;
	int count = 0;

	do {
		//only 3 three attempt after which program stop 
		if (count == 3) {
			cout <<"That is it pal\n";
			return 1;
		}
		count++;

		cout << "Enter the password: ";
		getline(cin, password, '\n');

	} while (password != "foobar");

	cout <<"Access allowed\n";

}
		
