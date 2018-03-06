//password checking using while loop

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string password;

	while (1) {
		
		cout << "Enter the password: ";
		getline(cin, password, '\n');
	
		//if password match break out of the infinte loop
		if (password == "foobar") {
			break;
		}

	}

	cout << "Welcome, you got the password right\n";

}
