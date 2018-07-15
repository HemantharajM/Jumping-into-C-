#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int range(int start, int end)
{
        return (rand() % (end - start + 1)) + start;
}


int main()
{
        srand(time(NULL));

        for(int i= 0; i < 20; i++) {
                cout << range(4,10) << '\n';
        }

}
