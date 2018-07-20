#include <iostream>
#include <map>
#include <ostream>
#include <string>

using namespace std;

void remove(map<string, string> &m, string key)
{
        auto i = m.find(key);

        if(i == m.end()){
                cout << "no such contac\n";
        } else {
                m.erase(i);
        }

}

void change(map<string, string> &m, string key , string email)
{
        auto i = m.find(key);

        if(i == m.end()) {
                cout <<"no such contact\n";
        } else {
                i->second = email;
        }

}

void display(map<string, string> &m)
{
        for(auto i = m.begin(); i != m.end(); ++i) {
                cout << i->first << " " << i->second << endl;
        }
}

int main()
{
        map<string, string> phone_book;
        
        string name;
        string email;
        cout << "Enter the phone book list name and email \n";
        
        for(int i = 0; i < 10; ++i) {
                cin >> name;
                cin >> email;

                phone_book[name] = email;
        }

        
        display(phone_book);
        
        cout << "Remove chance of 2 \n";

        for(int i = 0; i < 2; ++i) {
                
                cin >> name ;
                
                remove(phone_book, name);
        }

        display(phone_book);

        cout <<"Change chance of 2 \n";

        for(int i = 0; i < 2; ++i) {
                cin >> name ;
                cin >> email;

                change(phone_book, name, email);
        }

        display(phone_book);

}
