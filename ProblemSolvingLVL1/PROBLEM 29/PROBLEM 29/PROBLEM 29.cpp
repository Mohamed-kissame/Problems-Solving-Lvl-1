#include <iostream>
#include <string>

using namespace std;

enum enOddOrEven {Odd = 1 , Even = 2};

int ReadNumber() {

	int Num;

	cout << "ENTER PLEASE YOUR NUMBER ? :";
	cin >> Num;

	return Num;
}

enOddOrEven checkOddOrEven(int number) {

	if (number % 2 == 0)
		return enOddOrEven::Even;
	else
		return enOddOrEven::Odd;
}

int SumEvenNumberFrom1toN_UsingWhile(int N) {

	int sum = 0;
	int counter = 0;

	cout << "\nSUM EVEN NUMBERS USING WHILE : \n ";

	while (counter < N) {

		counter++;

		if (checkOddOrEven(counter) == enOddOrEven::Even) {

			sum += counter;
		}

		

	}

	return sum;
}

int SumEvenNumberFrom1toN_UsingDoWhile(int N) {

	int sum = 0;
	int counter = 0;

	cout << "\nSUM EVEN NUMBERS USING DO WHILE : \n";

	do {

		counter++;

		if (checkOddOrEven(counter) == enOddOrEven::Even) {

			sum += counter;
		}

	} while (counter < N);

	return sum;
}

int SumEvenNumberFrom1ToN_usingfor(int N) {

	int sum = 0;

	cout << "\nSUM EVEN NUMBERS USING FOR :\n";

	for (int i = 0 ; i <=N; i++)

		if (checkOddOrEven(i) == enOddOrEven::Even) {

			sum += i;
		}

	return sum;
}

int main() {

	int Num = ReadNumber();

	cout << SumEvenNumberFrom1toN_UsingWhile(Num)<< endl;
	cout << SumEvenNumberFrom1toN_UsingDoWhile(Num)<< endl;
	cout << SumEvenNumberFrom1ToN_usingfor(Num)<< endl;

	return 0;
}