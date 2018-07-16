#include <iostream>
#include <string>

using namespace std;

struct person{
        string name;
        string address;
        long long number;
};


int main()
{
        person dravid;

        cout << "Enter the name of the person \n";
        cin >> dravid.name;
        cout << "Enter address of the person \n";
        cin >> dravid.address;
        cin.ignore();
        cout << "Enter mobile number \n";
        cin >> dravid.number;
        

        cout << dravid.name << " lives in the address " << dravid.address << " with mobile number " << dravid.number << endl;

}


