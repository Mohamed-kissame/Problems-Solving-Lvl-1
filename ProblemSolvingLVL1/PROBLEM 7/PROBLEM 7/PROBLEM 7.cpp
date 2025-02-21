#include <iostream>
#include <string>

using namespace std;

int READnumber() {

	int number;

	cout << "ENTER PLEASE THE NUMBER : ";
	cin >> number;

	return number;

}

float CalculateHalfnumber(int number) {

	return (float)number / 2;

}


void PrintResults(int num) {

	string Results = " HALF OF " + to_string(num) + " IS : " + to_string(CalculateHalfnumber(num));
	cout << endl << Results << endl;

}

int main() {

	PrintResults(READnumber());

	return 0;
}