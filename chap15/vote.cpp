#include <iostream>

using namespace std;

int main()
{
        int vote[10];

        for(int i= 0;i < 10; i++) {
                vote[i] = 0;
        }

        int candidate;

        cout << "Vote for the candidate of your choice. 0.Joe, 1.Bob, 2.Mary, 3.Suzy, 4.Margaret, 5.Eleanor,  6.Alex, 7.Thomas, 8.Andrew, 9.Ilene" << endl;

        cin >> candidate;

        while(0 <= candidate & candidate <= 9) {
                vote[candidate] += 1;

                cout <<"Enter your vote \n";
                cin >> candidate;
        }

        cout <<"The result of election \n";

        for(int i = 0; i < 10; i++) {
                cout << vote[i] << " ";
        }

        cout << endl;

}
