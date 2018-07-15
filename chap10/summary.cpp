#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
        srand(time(NULL));

        int a[20];
        int highest = 0;
        int lowest = 1000;
        int average = 0;

        for(int i = 0; i < 20; i++) {
                a[i] = rand() % 100;
                cout << a[i] << ' ';
        }

        cout << endl;

        for(int i = 0; i < 20; i++) {

                if(a[i] < lowest) {
                        lowest = a[i];
                }

                if(a[i] > highest) {
                        highest = a[i];
                }

                average += a[i];

        }


        cout << "Lowest is " << lowest << " " << "Highest is " << highest << " " << " Average is " << average / 20 << endl;


}
