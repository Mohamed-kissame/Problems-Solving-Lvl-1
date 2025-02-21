#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string Message) {

	float Number ;

	cout << Message << endl;
	cin >> Number;


	return Number;
}

float SumNumber() {
      
	int Number = 0, sum = 0, counter = 1;

	do {

		Number = ReadNumber("ENTER PLEASE YOUR NUMBER " + to_string(counter));

		if (Number == -99) {

			break;
		}

		sum += Number;

		counter++;

	} while (Number != -99);

	return sum;
}

int main() {

	cout << endl << "Results = " << SumNumber() << endl;

	return 0;
}