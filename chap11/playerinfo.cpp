#include <iostream>
#include <string>

using namespace std;

struct PlayerInfo {
        int skill_levels;
        string name;
};

int main()
{
        PlayerInfo players[5];

        for(int i = 0; i < 5; i++) {
                cout << "please enter the name of the player\n";

                getline(cin,players[i].name,'\n');

                cout << "please enter the skill level for " << players[i].name << '\n';

                cin >> players[i].skill_levels;
                
                cin.ignore();
       }


       for(int i = 0; i < 5; i++) {
               cout << players[i].name << " is at skill level " << players[i].skill_levels << endl;
       }

}
