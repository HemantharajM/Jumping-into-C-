#include <iostream>

using namespace std;

int main()
{
        int x;
        int *p_x = NULL;

        p_x = &x;

        cout <<"Enter the value of x :";
        cin >> x;

        cout <<"Value point by p_x is " << *p_x << endl;

        *p_x = 10;

        cout <<"value of x after change by using pointer " << x << endl;

}
