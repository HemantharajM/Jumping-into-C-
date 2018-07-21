#include <iostream>
#include <string>

using namespace std;

int main()
{
        string first_name;
        string last_name;
        string player_class;

        while(1) {
                
                getline(cin, first_name, ',');

                if(first_name.size() == 0) {
                        break;
                }

                getline(cin, last_name, ',');

                getline(cin, player_class, '\n');

                cout << first_name << " " << last_name << " : " << player_class <<endl;

        }

}


               
