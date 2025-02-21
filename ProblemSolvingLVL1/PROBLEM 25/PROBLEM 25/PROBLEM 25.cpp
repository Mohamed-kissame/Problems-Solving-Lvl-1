#include <iostream>
#include <string>

using namespace std;

int ReadAge() {

	int Age;

	cout << "ENTER PLEASE AGE BETWEEN 18 AND 45 :";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To) {

	return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To) {



	int Age = 0;

	do
	{
		Age = ReadAge();

	} while (!ValidateNumberInRange(Age, From, To));

		return Age;
}

void PrintResults(int age) {

	cout << "Your Age is : " << age << endl;

}

int main() {

	PrintResults(ReadUntilAgeBetween(18, 45));

	return 0;
}