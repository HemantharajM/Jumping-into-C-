//print out entire lyrics to a full rendition of "99 bottles of beer"

#include <iostream>

using namespace std;

int main()
{
	
	for (int i= 99; i > 1; i--) {
		
		cout <<i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
		cout << "Take one down and pass it around, " << i - 1 << " bottles of beer on the wall.\n";
		cout << endl;
	
	}

	cout << "1 bottle of beer on the wall, 1 bottle of beer.\n";
	cout << "Take one down and pass it around, no more bottles of beer on the wall.\n";
	cout << endl;
	cout << "No more bottle of beer on the wall, no more bottles of beer.\n";
	cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n";

}
