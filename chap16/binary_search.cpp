#include <iostream>

using namespace std;

int binary_search(int arr[], int element,int low, int high, int mid)
{
        
        mid = int((low + high) / 2);
        
        if (high < low) {
                return -1;
        }

        if(arr[mid] == element) {
                return mid;
        } else if (arr[mid] > element) {

                binary_search(arr,element,low, mid -1, mid);
        } else {

                binary_search(arr,element,mid + 1, high, mid);
        }

}

int main()
{
        int arr[20];
        int value;

        for(int i = 0; i < 20; i++) {
                arr[i] = i;
                cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Enter value to search" << endl;

        cin >> value;

        cout << binary_search(arr, value, 0, 20, 0) << endl;

}

        
