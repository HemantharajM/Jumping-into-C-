//check both username and password return appropriate comment.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username;
	string password;

	cout << "Enter your username: ";
	getline(cin,username,'\n');
	cout << "Enter your password: ";
	getline(cin,password, '\n');

	if (username == "gideon" && password == "xxxx") {
		cout << "Access allowed\n";
	} else if (username == "gideon") {
		cout << "Wrong password\n";
		return 0;
	} else {
		cout << "Both username and password is wrong\n";
		return 0;
	}

}
