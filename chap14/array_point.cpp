#include <iostream>

using namespace std;

int main()
{
        int arr[8];

        int *a = arr;

        for(int i=0; i < 8; i++) {
                *(a+i) = i;
        }

        for(int i = 0; i < 8; i++) {
                cout << arr[i] << " ";
        }
        cout << endl;
}
