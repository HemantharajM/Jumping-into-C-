#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int findsmallestindex(int arr[], int index, int size)
{
        int smallest_index = index;
        
        for(int i = index; i < size; i++) {

                if(arr[i] < arr[smallest_index]) {
                        smallest_index = i;
                } 

          }


        return  smallest_index;
 
}

void swap(int arr[], int one , int second)
{
        int temp = arr[one];

        arr[one] = arr[second];

        arr[second] = temp;

}


int main()
{
        srand(time(NULL));

        int a[10];
        int small_index = 0;

        for(int i = 0; i < 10; i++) {

                a[i] = rand() % 100;

                cout << a[i] << ' ' ;
       }

       cout << endl;

       cout << "Sorted array\n";

       for(int i = 0; i < 10; i++) {

                small_index = findsmallestindex(a,i,10);

                swap(a,i,small_index);
                
                cout << a[i] << ' '  ;
      }

      cout << endl;

}
