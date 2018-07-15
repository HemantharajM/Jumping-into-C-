//here we introduction function to return added value

#include <iostream>

using namespace std;

long long add_function(int, int);

int main()
{
	int x;
	int y;

	cout << "Enter the value of x and y: ";
	cin  >> x >> y;

	cout << "The addition of " << x << " and " << y << '\t'<< add_function(x, y) << endl;

}

long long add_function(int x, int y)
{
	
	return (long long) x + y;
}
