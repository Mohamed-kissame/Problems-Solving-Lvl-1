#include <iostream>
#include <string>

using namespace std;

int ReadAge() {

	int Age;

	cout << "ENTER YOUR AGE :";
	cin >> Age;

	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To) {

	return (Number >= From && Number <= To);

}

void PrinResults(int Age) {

	if (ValidateNumberInRange(Age, 18, 45))
		cout << endl << Age << " Is Valid Age \n";
	else
		cout << "\n" << Age << " Is Invalide Age \n";
}

int main() {

	PrinResults(ReadAge());

	return 0;
}