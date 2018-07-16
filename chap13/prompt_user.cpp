#include <iostream>
#include <string>

using namespace std;

void get_name(string &first, string &last)
{
        cout << "Enter firstname " << endl;
        cin >> first;

        cout <<"Enter lastname " << endl;
        cin >> last;

}

int main()
{

        string first_name ;
        string last_name ;

        get_name(first_name, last_name);

        cout << first_name + " " + last_name << endl;

}
