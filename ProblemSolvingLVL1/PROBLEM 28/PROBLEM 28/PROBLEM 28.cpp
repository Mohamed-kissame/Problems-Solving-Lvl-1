#include<iostream>
#include<string>

using namespace std;

enum enOddEven { Odd = 1 , Even = 2};

int ReadNumber() {

	int Num;

	cout << "ENTER THE NUMBER PLEASE :";
	cin >> Num;

	return Num;
}

enOddEven checkOddOrEven(int number) {

	if (number % 2 != 0)
		return enOddEven::Odd;
	else
		return enOddEven::Even;
}

int SumTheNumberOdd_UsingFor(int N) {

	int sum = 0;

	cout << "\nSUM THE NUMBER ODD USING FOR :\n";

	for (int i = 1; i <= N; i++) 


		if (checkOddOrEven(i) == enOddEven::Odd) {

			sum += i;
		}

	return sum;
}

int SumTheNumberOdd_UsingWhile(int N) {

	int sum = 0;
	int counter = 0;


	cout << "\nSUM THE NUMBER ODD USING WHILE :\n";

	while (counter < N) {

		counter++;

		if (checkOddOrEven(counter) == enOddEven::Odd) {

			sum += counter;

		}

	}


	return sum;
}

int SumTheNumberOdd_UsingDoWhile(int N) {

	int sum = 0;
	int counter = 0;

	cout << "\nSUM THE NUMBER ODD USING DO WHILE :\n";

	do {

		counter++;

		if (checkOddOrEven(counter) == enOddEven::Odd) {

			sum += counter;
		}


	} while (counter < N);


	return sum;
}


int main() {

	int Num = ReadNumber();

	cout << SumTheNumberOdd_UsingFor(Num) << endl;
	cout << SumTheNumberOdd_UsingWhile(Num) << endl;
	cout << SumTheNumberOdd_UsingDoWhile(Num) << endl;

	return 0;
}