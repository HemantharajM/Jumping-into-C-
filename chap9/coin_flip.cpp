#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
        int coin;

        srand(time(NULL));

        for(int i= 0; i<20; i++) {
                coin = rand() % 2;

                cout << coin << endl;
       } 

}
