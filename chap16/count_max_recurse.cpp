#include <iostream>

using namespace std;

void recurse(int num)
{
        cout << num << " ";

        recurse(num + 1);
}


int main()
{
        recurse(1);
}
