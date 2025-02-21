#include <iostream>
#include <string>

using namespace std;

int ReadNumber() {

	int Num;

	cout << "ENTER PLEASE YOUR NUMBER ? :";
	cin >> Num;

	return Num;
}

void PrintRnageFromNto1_UsingWhile(int N) {

	int counter = N;

	cout << "\nTHE RANGE OF NUMBER USING WHILE :\n";

	while (counter >= 1) {

		cout << counter << endl;

		counter--;

	}
}

void PrintRangeFromNto1_UsingDoWhile(int N) {

	int counter = N;

	cout << "\nTHE RANGE OF NUMBER USING DO WHILE :\n";

	do {

		cout << counter << endl;

		counter--;

	} while (counter >= 1);
}

void PrintRnageFromNto1_UsingFor(int N) {


	cout << "\nTHE RANGE OF NUMBER USING FOR :\n";

	for (int i = N;i >= 1;i--) {

		cout << i << endl;
	}



}

int main() {

	int N = ReadNumber();

	PrintRnageFromNto1_UsingWhile(N);
	PrintRangeFromNto1_UsingDoWhile(N);
	PrintRnageFromNto1_UsingFor(N);

	return 0;
}
