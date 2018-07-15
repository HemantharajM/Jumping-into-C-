//explain how local variable work

#include <iostream>

using namespace std;

void changeArgument (int x);

int main()
{
	int x = 10;

	cout << "The value of x before calling the function " << x ;

	changeArgument(x);

	cout << " after calling the function " << x << endl;

}

void changeArgument(int x)
{
	x = x + 5;
}
