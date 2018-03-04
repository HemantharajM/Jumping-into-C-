//This program take two value and add , multiply, sub and divide them

#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;

	cout << "Enter the first number: ";
	cin  >> a;
	cout << "Enter the second number: ";
	cin  >> b;

	cout <<  a << " + " << b << " = " << a + b << endl;
	cout <<  a << " - " << b << " = " << a - b << endl;
	cout <<  a << " * " << b << " = " << (long long) a * b << endl;
	cout <<  a << " / " << b << " = " << a / b << endl;

}
