//small calculator take operator and argument as input and produce the result

#include <iostream>

using namespace std;

int main()
{
	char oper;
	float arg1;
	float arg2;

	//accept operator and input from user

	cout << "Enter a operator and inputs: " ;
	cin  >> oper >> arg1 >> arg2;

	//different operator produce different result

	if (oper == '+') {
		cout << arg1 << " + " << arg2 << " = " << arg1 + arg2 << endl;
	} else if (oper == '-') {
		cout << arg1 << " - " << arg2 << " = " << arg1 - arg2 << endl;
	} else if (oper == '*') {
		cout << arg1 << " * " << arg2 << " = " << arg1 * arg2 << endl;
	} else {
		cout << arg1 << " / " << arg2 << " = " << arg1 / arg2 << endl;
	}

}
