#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
        int num = 0;
        int guess = 0;
        
        srand(time(NULL));

        int status = 1;

        num = rand() % 101;

        while(status) {
        
               cout << "Try your guess\n";
               cin >> guess;

               if(guess == num) {
                       cout << "just right\n";
                       status = 0;
              } else if (guess > num) {
                       cout << "too high\n";
              } else {
                      cout << "too low\n";
              }

       }

}
