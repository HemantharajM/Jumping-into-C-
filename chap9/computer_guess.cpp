#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
        int num = 0;
        int low = 0;
        int high = 100;
        int mid = 50;

        srand(time(NULL));

        num = rand() % 101;
        cout << num << endl;
        
        while(1){
                mid =int((low + high) / 2.0);

                cout << mid << endl;

                if(mid == num) {
                        cout << "just right\n";
                        break;
                } else if(mid > num) {
                        cout << "too high\n";
                        high = mid - 1;
                } else {
                        cout << "too low\n";
                        low = mid + 1;
                }

         }
} 
