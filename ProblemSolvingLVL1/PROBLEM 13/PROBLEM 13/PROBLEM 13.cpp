#include <iostream>

using namespace std;

void ReadNUmbers(int numbers[3]) {

	cout << "ENTER PLEASE THE FIRST NUMBER :";
	cin >> numbers[0];

	cout << "ENTER THE SECOND NUMBER :";
	cin >> numbers[1];

	cout << "ENTER THE LAST NUMBER :";
	cin >> numbers[2];

}

int MaxOf3Numbers(int number[3]) {

	if (number[0] > number[1])
		if (number[0] > number[2])

			return number[0];
		else
			return number[2];

	else
		if (number[1] > number[2])
			return number[1];
		else
			return number[2];

}

void PrintResults(int Max) {

	cout << "\nTHE MAX OF THIS 3 NUMBERS IS : " << Max << endl;
}

int main() {

	int numbers[3];

	ReadNUmbers(numbers);

	PrintResults(MaxOf3Numbers(numbers));

	return 0;
}