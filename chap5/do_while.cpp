//prompt the user for password untill it checks correct.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;

	do {
		cout << "Enter the password:  ";	
		getline(cin, password, '\n');
	
	} while (password != "foobar");
	
	cout << "Welcome, you got the password right\n";
}

