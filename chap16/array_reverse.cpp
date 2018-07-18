#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void reverse_array(int arr[], int size, int index)
{
        if(index < size-1) {
                reverse_array(arr, size, index+1);
        }

        cout << arr[index]<< " ";
}

int main()
{
        int arr[10];

        srand(time(NULL));

        for(int i = 0; i < 10; i++) {
                arr[i] = rand() % 20;
                cout << arr[i] << " ";
        }

        cout << endl;

        reverse_array(arr, 10, 0);

        cout << endl;
}

