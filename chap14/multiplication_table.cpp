#include <iostream>

using namespace std;

int main()
{
        int **p_p_array;

        p_p_array = new int * [5];

        for(int i = 0; i < 5; i++) {
                p_p_array[i] = new int [i+1];
        }

        for(int i = 0; i < 5; i++) {

                for(int j = 0; j < (i+1); j++) {

                        p_p_array[i][j] = (i+1)*(j+1);
                }
        }


        for(int i= 0; i < 5; i++) {
                for(int j = 0; j < (i+1); j++) {
                        cout << p_p_array[i][j] << " ";
                }
                cout << endl;
        }

        for(int i = 0; i < 5; i++) {
                delete [] p_p_array[i];
        }

        delete [] p_p_array;
}

