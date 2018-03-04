//This program take user first and last name and append them

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string user_first_name;
	string user_last_name;
	string user_full_name;

	cout << "Please enter your first name: ";
	cin  >> user_first_name;
	cout << "Please enter your last name: ";
	cin  >> user_last_name;

	user_full_name = user_first_name + " " + user_last_name;

	cout << "Hi " << user_full_name << endl;

}
