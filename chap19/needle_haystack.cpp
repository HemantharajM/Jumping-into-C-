#include <iostream>
#include <string>

using namespace std;

int main()
{
        string needle;
        string haystack;
        
        int needle_appear = 0;
        int i = 0;

        cout <<"Please enter the needle\n";
        cin >> needle;
        cout <<"Please enter the haystack\n";
        cin.ignore();

        getline(cin, haystack, '\n');
        
        i = haystack.find(needle, i);

        while(i != string::npos) {
                needle_appear += 1;

                i++;

                i = haystack.find(needle, i);
        }


        cout <<"The " << needle << " appear " << needle_appear << " times.\n";

}
