#include <iostream>
#include <string>

using namespace std;

int main()
{
        string input = "abcdedfghijklmnopqrstuvwxyz";

        string substring = input.substr(0,10);

        cout << input << " first ten character is " << substring << endl;

}
