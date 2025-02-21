#include <iostream>
#include <string>

using namespace std;

string ReadPinCode() {

	string PinCode;

	cout << "ENTER PLEASE YOUR PIN CODE :";
	cin >> PinCode;

	return PinCode;

}

bool Login() {

	string PinCode;
	int FailedCounter = 3;

	do {

		FailedCounter--;

		PinCode = ReadPinCode();

		if (PinCode == "1234")
		{
			return 1;
		}

		else {

			cout << "\nWrong PIN,you have " << FailedCounter << " more tries\n";
			system("color 4F");

		}


	} while ( FailedCounter >= 1 && PinCode != "12345");

	return 0;
}

void ShowLogin() {

	if (Login())
	{
		system("color 2F");

		cout << "\nYour account Balance is " << 7500 << '\n';
	}
	else
	{
		cout << "\nYour card is blocked call the bank for help. \n";
	}

}

int main() {

	ShowLogin();

	return 0;
}