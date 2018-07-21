#include <iostream>
#include <string>

using namespace std;

void print_string(string &str)
{
        for(int i = 0; i < str.size(); ++i) {
                cout << str[i] << " ";
        }
        cout << endl;
}


int main()
{
        string input = "abcdefghijklmnopqrstuvwxyz";

        print_string(input);
}
