#include <iostream>

using namespace std;

int main()
{
        enum RainbowColor {
                RC_RED, RC_ORANGE, RC_YELLOW, RC_GREEN, RC_BLUE, RC_INDIGO, RC_VIOLET
        };

        RainbowColor chosen_color = RC_RED;

        switch (chosen_color) {

                case RC_RED:
                        cout << "RED color" << endl;
                        break;
                case RC_ORANGE:
                        cout << "ORANGE color" << endl;
                        break;
                case RC_YELLOW:
                        cout << "YELLOW color" << endl;
                        break;
                case RC_GREEN:
                        cout << "GREEN color" << endl;
                        break;
                case RC_BLUE:
                        cout << "BLUE color" << endl;
                        break;
                case RC_INDIGO:
                        cout << "INDIGO color" << endl;
                        break;
                case RC_VIOLET:
                        cout << "VIOLET color" << endl;
                        break;
        }

}
