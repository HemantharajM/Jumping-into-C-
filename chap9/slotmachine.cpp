#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
        int a = 0;
        int b = 0;
        int c = 0;
        
        srand(time(NULL));

        a = rand()%4;
        b = rand()%4;
        c = rand()%4;

        if (a == b & b == c) {
                cout << a << ' ' << b << ' ' << c << endl;
                cout << "You win cash prize\n";
        } else {
                cout << a << ' ' << b << ' ' << c << endl;
                cout << "oh!, you lose\n";
       }

}
