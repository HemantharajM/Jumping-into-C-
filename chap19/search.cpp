#include <iostream>
#include <string>

using namespace std;

int main()
{
        string input;
        int cat_appear = 0;

        cout <<"please enter a text with cat \n";

        getline(cin,input,'\n');

        for(int i = input.find("cat", 0); i != string::npos; i = input.find("cat",i)) {
                cat_appear++;
                i++;
        }

        cout <<"THe word cat appears " << cat_appear << " in the string " <<endl;

}
