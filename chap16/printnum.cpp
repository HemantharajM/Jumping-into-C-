#include <iostream>

using namespace std;

void printnum(int num)
{
        cout << num ;

        if(num < 9) {
                printnum(num+1);
        }

        cout << num;
}


int main()
{
        printnum(1);
        cout << endl;
}
