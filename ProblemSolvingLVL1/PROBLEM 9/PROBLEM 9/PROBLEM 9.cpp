#include <iostream>

using namespace std;

int ReadNUMBER(int number[3]) {

	cout << "PLEASE ENTER NUMBER 1 ? :";
	cin >> number[0];

	cout << "ENTER NUMBER 2 ? :";
	cin >> number[1];

	cout << "ENTER NUMBER 2 ? :";
	cin >> number[2];

	return number[3];
}

int calaculateSUMofNUMBERS(int number[3]) {

	 return number[0] + number[1] + number[2];

}

void PrintResults(int number[3]) {

	int results = calaculateSUMofNUMBERS(number);

	cout << "\nTHE RESULTS OF SUM NUMBERS IS :" <<  results << endl;
}

int main() {

	int number[3];

	ReadNUMBER(number);

	PrintResults(number);
}