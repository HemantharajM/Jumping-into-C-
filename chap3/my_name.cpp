//This program read my name and print it.

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string my_name;

	cout << "Please enter your name: ";
	getline(cin, my_name, '\n');
	cout << "Hi " << my_name << endl;

}
