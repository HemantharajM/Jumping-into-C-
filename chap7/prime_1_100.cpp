#include <iostream>

using namespace std;

int isprime(int num);

int main()
{
	
	for (int i = 1; i < 100; i++) {
		
		if (isprime(i)) {
			
			cout << i << endl;

		}

	}


	return 0;
}

int isprime(int num)
{
	if (num == 1) {
		return true;
	}

	for (int i = 2; i < num; i++) {
		
		if (num % i == 0) {
			
			return false;
		}
	}

	return true;

}
