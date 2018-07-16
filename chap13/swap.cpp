#include <iostream>

using namespace std;

void swap1(int a, int b)
{
        int temp;

        temp = a;
        a = b;
        b = temp;

}


void swap2(int *p_a, int *p_b)
{
        int temp;

        temp = *p_a;
        *p_a = *p_b;
        *p_b = temp;

}


int main()
{
        int a, b;

        a = 5;
        b = 10;

        cout << "a = " << a << " b = " << b << endl;

        swap1(a,b);

        cout <<"After swap1 : " << "a = " << a << " b = " << b << endl;

        swap2(&a, &b);

        cout <<"After swap2 : " << "a = " << a << " b = " << b << endl;


 }
