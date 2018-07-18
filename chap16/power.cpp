#include <iostream>

using namespace std;

long long power(int x,int y)
{
        if(y == 1) {
                return x;
        }else if (y == 0) {
                return 1;
        }else {
                return x * power(x,y-1);
        }
}

int main()
{
        int x, y;

        cout <<"enter the x and y\n";
        cin >> x >> y;

        cout << power(x,y) << endl;
}
