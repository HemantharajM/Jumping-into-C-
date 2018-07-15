#include <iostream>
using namespace std;

void playgame()
{
}

void loadgame()
{
}

void playmultiplayer()
{
}

int main()
{

	int choice;

	cout << "1. Play game" << endl;
	cout << "2. Load game" << endl;
	cout << "3. Play multiplayer" << endl;
	cout << "4. Exit " << endl;
	cout << "Selection: ";

	cin >> choice;

	switch (choice) {
		
		case 1 :
			playgame();
			break;
		case 2 :
			loadgame();
			break;
		case 3 :
			playmultiplayer();
			break;

		case 4 :
			cout << "Thank you for playing!\n";
			break;
		default :
			cout << "Error, bad input, quitting\n";
			break;
	}

	
}	
