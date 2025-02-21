#include <iostream>
#include<string>

using namespace std;

enum enPrimNotPrime { Prime = 1 , NotPrime = 2};

float ReadPositiveNumber(string Message) {

	float Number = 0;

	do {

		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;

}

enPrimNotPrime checkNumberTupe(int Number) {

	int M = round(Number / 2);

	for (int counter = 2; counter <= M; counter++) 
	{

		if (Number % counter == 0)

			return enPrimNotPrime::NotPrime;
	}

	return enPrimNotPrime::Prime;

}

void PrinNumberType(int Number) {

	switch (checkNumberTupe(Number)) {

	case enPrimNotPrime::Prime:
		cout << "The number is Prime\n";
		break;
	case enPrimNotPrime::NotPrime:
		cout << "The number is Not Prime\n";
		break;
	}
}

int main() {


	PrinNumberType(ReadPositiveNumber("PLEASE ENETER A POSITIVE NUMBER ?"));
	return 0;
}