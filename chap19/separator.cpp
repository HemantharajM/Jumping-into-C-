#include <iostream>
#include <string>

using namespace std;

int main()
{
        string input;
        string separator_string = "";
        string accumulator = "";
        char separator;
        
        int choice = 0;
        int token = 0;

        cout <<"please enter the input\n";
        cin.ignore();

        getline(cin, input, '\n');

        for(int i = 0; i != input.size(); ++i) {
                if((input[i] >= 'a' and input[i] <= 'z') or (input[i] >= 'A' and input[i] <= 'Z' ) or (input[i] >= '0' and input[i] <= '9')){

                } else {
                        for(int j = 0; j != separator_string.size(); ++j) {
                                if(input[i] == separator_string[j]) { 
                                        token = 1;
                                 }
                        }
                        if(!token){
                                separator_string += input[i];
                        } else {
                                token = 0;
                        }
                }
        }

        cout <<"choose the separator\n";

        for(int i = 0; i != separator_string.size(); ++i) {
                cout << i << " for " << separator_string[i] << endl;
        }

        cin >> choice;

        separator = separator_string[choice];

        for(int i = 0; i != input.size(); ++i) {
               
                if(input[i] != separator) {
                        accumulator += input[i];
                } else {
                        cout << accumulator << endl ;
                        accumulator = "";
                }

         }

}
