#include <iostream>
#include <string>

using namespace std;

string ReadPinCode(){

	string PinCode;

	cout << "Please Enter PIN code :";
	cin >> PinCode;

	return PinCode;

}

bool login() {

	string PinCode;

	do {
		PinCode = ReadPinCode();

		if (PinCode == "1234") {

			return 1;// this will exit the function and return True
		}

		else {

			cout << "\nWrong PIN ..!\n" << endl;

			system("color 4F"); // turn screen to red
		}
	} while (PinCode != "1234");

	return 0;// when you reach here this means login faild

}

void PrinResults() {

	if (login()) {

		system("color 2F"); // turn screen to green
		cout << "\nYour account balance is " << 7500 << '\n';
	}
}
int main() {

	PrinResults();

	return 0;
}