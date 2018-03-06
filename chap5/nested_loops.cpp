//Display the multiplication table

#include <iostream>

using namespace std;

int main()
{

	cout << "Multiplication table\n";
	//display heading row of multiplication
	for (int i = 1; i < 10 ; i++) {
		cout << '\t' << i;

	}

	cout << endl;
	
	//go through every row
	for (int i = 1; i < 10; i++) {
	
		//go through every column
		cout << i;
		for (int j = 1; j < 10; j++) {

			cout <<'\t' << i * j;
		}

		cout << endl;
	}

}

	
