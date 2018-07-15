#include <iostream>
#include <string>

using namespace std;

void print(int digit, int place );

int main()
{
	
	int num;
	int place;
	int n = 0;

	cout << "Enter the number  ";
	cin  >> num;
	
	place = num;

	while (place) {
		place = place / 10;
		n++;
	}
	
	int arr[n];

	for (int i = 0; i < n; i++) {
		
		arr[i] = num % 10;

		num = num / 10;

	}

	for (int i = n - 1; i >= 0; i--) {
		
		print(arr[i], i);
	
	}

	cout << endl;

}

void print(int digit, int place)
{
	
	if (digit == 1 & place != 1 & place != 4) {
		cout << "one ";
	}else if (digit == 2 & (place != 1 & place != 4)) {
		cout <<"two ";
	}else if (digit == 3 &( place != 1 & place != 4)) {
		cout <<"three ";
	}else if (digit == 4 & (place != 1 & place != 4)) {
		cout <<"four ";
	}else if (digit == 5 & (place != 1 & place != 4)) {
		cout <<"five ";
	}else if (digit == 6 & (place != 1 & place != 4)) {
		cout <<"six ";
	}else if (digit == 7 &( place != 1 & place != 4)) {
		cout <<"seven ";
	}else if (digit == 8 &( place != 1 & place != 4)) {
		cout <<"eight ";
	}else if (digit == 9 & (place != 1 & place != 4)) {
		cout <<"nine ";
	}else {
		if (digit == 1) {
			cout <<"ten ";
		} else if (digit == 2) {
			cout <<"twenty ";
		} else if (digit == 3) {
			cout <<"thirty ";
		} else if (digit == 4) {
			cout <<"fourty ";
		} else if (digit == 5) {
			cout <<"fifty ";
		} else if (digit == 6) {
			cout <<"sixty ";
		} else if (digit == 7) {
			cout <<"seventy ";
		} else if (digit == 8) {
			cout <<"eighty ";
		} else if (digit == 9) {
			cout <<"ninty ";
		}
	}
	
	
	if (digit != 0) {
		
		if (place == 2 | place == 5) {
			cout <<"hundred ";
		} else if (place == 3) {
			cout <<"thousand ";
		} else if (place == 6) {
			cout <<"million ";
		}
	}


}
