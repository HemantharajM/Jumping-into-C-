#include <iostream>

using namespace std;

int main()
{
        int a[8][8];

        for(int i = 0; i < 8; i++) {
                for(int j = 0; j < 8; j++) {
                        a[i][j] = 0;
                }
        }


        for(int i=0; i < 8; i++) {
                for(int j = 0; j < 8; j++) {
                        a[i][j] = (i+1) * (j+1);
                }
        }

        for (int i=0; i < 8; i++) {
                for(int j = 0; j < 8; j++) {
                        cout << a[i][j] << ' ';
                }

                cout << endl;
        }

}
