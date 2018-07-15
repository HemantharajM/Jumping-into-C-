#include <iostream>
#include <string>

using namespace std;

int word_to_digit(string word);

int main()
{
	string word;
	int sum = 0;
	int digit = 0;
	
	cout << "Enter the number is words  ";

	while(getline(cin, word, ' ' )) {
		
		digit = word_to_digit(word);
		
		if (digit == 1000 | digit == 1000000 | digit == 100) {
			
			sum *= digit;
		} else {
			sum += digit;
		}
		
		cout << sum << endl;
	} 

}

int word_to_digit(string word)
{
	if (word == "one") {
		return 1;
	} else if (word == "two") {
		return 2;
	} else if (word == "three") {
		return 3;
	} else if (word == "four") {
		return 4;
	} else if (word == "five") {
		return 5;
	} else if (word == "six" ) {
		return 6;
	} else if (word == "seven") {
		return 7;
	} else if (word == "eight") {
		return 8;
	} else if (word == "nine") {
		return 9;
	} else if (word == "ten") {
		return 10;
	} else if (word == "twenty") {
		return 20;
	} else if (word == "thirty") {
		return 30;
	} else if (word == "fourty") {
		return 40;
	} else if (word == "fifty") {
		return 50;
	} else if (word == "sixty") {
		return 60;
	} else if (word == "seventy") {
		return 70;
	} else if (word == "eighty") {
		return 80;
	} else if (word == "ninty") {
		return 90;
	} else if (word == "hundred") {
		return 100;
	} else if (word == "thousand") {
		return 1000;
	} else if (word == "million") {
		return 1000000;
	}
}

	
