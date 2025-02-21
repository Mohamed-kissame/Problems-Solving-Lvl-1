#include <iostream>

using namespace std;

enum enNumberType { odd = 1, Even = 2 };

int READnum() {
	int num;

	cout << "ENTER PLEASE THE NUMBER FOR CHECK : ";
	cin >> num;

	return num;
}

enNumberType checkNumberType(int num) {

	int results = num % 2;

	if (results == 0)
		return enNumberType::Even;
	else
		return enNumberType::odd;
}

void  PrintNUmberType(enNumberType NUMBERType) {

	

	if (NUMBERType == enNumberType::Even) {

		cout << "\nTHE NUMBER IS EVEN " << endl;
	}

	else {

		cout << "\nTHE NUMBER IS ODD " << endl;

	}
}

int main() {

	PrintNUmberType(checkNumberType(READnum()));

	return 0;
}