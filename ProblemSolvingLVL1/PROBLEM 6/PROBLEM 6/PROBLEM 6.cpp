#include <iostream>
using namespace std;

struct stInfo {

	string FirstName;
	string LastName;
};

stInfo ReadInfo() {

	stInfo info;

	cout << "ENTER PLEASE YOUR FIRST NAME : ";
	cin >> info.FirstName;

	cout << "ENTER PLEASE THE LAST NAME : ";
	cin >> info.LastName;

	return info;
}

string GetFullName(stInfo Info) {


	string FullNAME = Info.FirstName + " " + Info.LastName;

	return FullNAME;
}

void PrintFullNAME(string FullName) {

	cout << "\nYOUR FULL NAME IS : " << FullName << endl;
}

int main() {

	PrintFullNAME(GetFullName(ReadInfo()));

	return 0;
}