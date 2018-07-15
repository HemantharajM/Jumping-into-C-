//explain and use of global variable.

#include <iostream>

using namespace std;

void do_stuff();

// initialie the global variable, it scope strat from here

int count_of_function_calls = 0;

void fun();

int main()
{
	fun();
	fun();
	fun();

	cout << "Function fun was called " << count_of_function_calls << " times." << endl;

}

void do_stuff()
{

	cout <<"sorry" << endl;

}

void fun()
{
	count_of_function_calls++;
}
