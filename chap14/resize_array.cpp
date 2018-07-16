#include <iostream>

using namespace std;

int *growArray(int *p_arr, int cur_size);

int main()
{
        int next_element = 0;
        int size = 1; 
        int *p_array = new int[size];

        int val;

        cout <<"please enter a number: ";
        cin >> val;

        while(val > 0) {
                
                if(size == next_element ) {

                        p_array = growArray(p_array, size);

                        size = next_element;

                        cout <<"array size is" << size << endl;
               }

               p_array[next_element] = val;

               next_element += 1;

               cout <<"enter zero to exit" << endl;

               for(int i =0;i < next_element; i++) {
                       cout << p_array[i] << " ";
               }
               cout << endl;
               cin  >> val;
        }

}

int *growArray(int *p_arr, int cur_size)
{
        int *p_temp = new int[2*cur_size];

        for(int i = 0; i < cur_size; i++) {
                p_temp[i] = p_arr[i];
        }
        
        delete p_arr;

        return p_temp;
}


