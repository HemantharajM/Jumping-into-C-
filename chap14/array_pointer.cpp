#include <iostream>

using namespace std;

int main()
{
        int numbers[8];

        int *p_num = numbers;

        for(int i=0; i < 8; i++) {
                p_num[i] = i;

                cout << p_num[i] << " ";
       }
        cout << endl;

}
