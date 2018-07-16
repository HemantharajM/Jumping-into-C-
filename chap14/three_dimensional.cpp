#include <iostream>

using namespace std;

void multiplication_threedimension(int length, int width, int size)
{
        int ***p_p_p_array = NULL;

        p_p_p_array = new int **[size];

        for(int i = 0; i < size; i++) {
                p_p_p_array[i] = new int *[width];

        }

        for(int i = 0; i < size; i++) {
                for(int j = 0; j < width; j++) {
                        p_p_p_array[i][j] = new int [length];
                }
        }


        for(int i = 0; i < size; i++) {
                for(int j = 0; j < width; j++) {
                        for(int k = 0; k < length; k++) {
                                p_p_p_array[i][j][k] = (i+1)*(j+1)*(k+1);

                                cout << p_p_p_array[i][j][k] << " ";
                        }

                        cout << endl;
                }

                cout << endl;

        }


        for(int i = 0; i < size; i++) {
                for(int j = 0; j < width; j++) {
                        delete [] p_p_p_array[i][j];
                }
        }


        for(int i = 0; i < size; i++) {
                delete [] p_p_p_array[i];
        }

        delete [] p_p_p_array;
}


int main()
{
        int length, width, size;

        cout <<"Please enter length width and size :";
        cin >> length >> width >> size;


        multiplication_threedimension(length, width, size);
}
