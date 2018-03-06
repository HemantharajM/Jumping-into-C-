//program that computes a running sum of inputs from the user, terminate when the user give an input 0.

#include <iostream>

using namespace std;

int main()
{
	long long sum = 0;
	int user_input;

	do {
		cout <<"Enter the input: ";
		cin  >> user_input;

		sum += user_input;

		cout <<"Total sum upto the input is " << sum << endl;
	
	} while (user_input);

}
