#include <iostream>
#include <string>

using namespace std;

int main()
{
        string input;
        
        cout << "Please enter a line of text\n";
        
        getline(cin, input, '\n');

        cout <<input<<endl;
}
