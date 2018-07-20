#include <iostream>
#include <map>
#include <ostream>
#include <string>

using namespace std;

void regis(map<string, string>&m, string usr_name)
{
        auto i = m.find(usr_name);
        
        string password;

        if(i == m.end()) {
                cout <<"Sorry invalid user_name\n";
        } else {
                cout <<"Enter the username and password\n";

                cin >> usr_name;
                cin >> password;

                m[usr_name] = password;
        }
}

bool check(map<string, string>&m, string usr_name, string password)
{
        auto i = m.find(usr_name);

        if(i == m.end()) {
                return false;
        } else {
               
               if(i->second == password) {
                       return true;
               } else {
                       return false;
               }
       }
}

int main()
{
        map<string, string> m;
        
        string usr_name;
        string  password;
        int choice;
        bool valid;

        m["root"] = "gideon";

        cout << "Enter the choic 1.Register 2.log in  and 0.exit \n";
        
        cin >> choice;
        
        while(choice) {

                if(choice == 1) {
                        cout << "Enter the already registered username\n";
                        cin >> usr_name;
                        regis(m,usr_name);
                        cout <<"Thank you for registration\n";
                } else {

                        cout << "Enter username and password\n";
                        cin >> usr_name;
                        cin >> password;

                        valid = check(m, usr_name, password);

                        if(valid) {
                                cout <<"You have access\n";
                        } else {
                                cout <<"wrong username or password\n";
                        }
              }

              cout <<"Enter the choice 1.Register 2.log in and 0.exit\n";
              cin >> choice;
        }

}

