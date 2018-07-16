#include <iostream>

using namespace std;

int main()
{
        int **p_p_board;

        p_p_board = new int* [3];

        for(int i = 0; i < 3; i++) {
                p_p_board[i] = new int [3];
        }


        for(int i = 0; i < 3; i++) {
                
                for(int j = 0; j < 3; j++) {

                        p_p_board[i][j] = i+ j;
                 }
        }


        for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                        cout << p_p_board[i][j] << " ";
                }

                cout << endl;
        }


        for(int i = 0; i < 3; i++) {
                delete [] p_p_board[i];
        }

        delete [] p_p_board;
}
