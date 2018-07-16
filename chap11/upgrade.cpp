#include <iostream>

using namespace std;

struct EnemyspaceShip {
        int x_coordinate;
        int y_coordinate;
        int weaponpower;
};

EnemyspaceShip getNewenemy() 
{
        EnemyspaceShip ship;

        ship.x_coordinate = 0;
        ship.y_coordinate = 0;
        ship.weaponpower = 20;

        return ship;
}

EnemyspaceShip upgrade(EnemyspaceShip ship)
{
        ship.weaponpower += 10;

        return ship;
}

int main()
{
        EnemyspaceShip enemy = getNewenemy();
        enemy = upgrade(enemy);

        cout <<" Enemy ship " << enemy.x_coordinate << " " << enemy.y_coordinate << " " << enemy.weaponpower << endl;
}

