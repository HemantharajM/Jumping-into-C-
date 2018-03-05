//Ask the user for two user's ages, and indicate who is older; behave differently if both are over 100.

#include <iostream>

using namespace std;

int main()
{
	int age1;
	int age2;

	cout << "Enter two ages: ";
	cin  >> age1 >> age2;

	if (age1 >= 100 && age2 >= 100) {
		cout << "Cheer you guys\n";
	} else if (age1 > age2) {
		cout << age1 << " is greater than " << age2 << endl;
	} else if (age1 == age2) {
		cout << "Both have same age " << age1 << endl;
	} else {
		cout << age2 << " is greater than " << age1 << endl;
	}

}

