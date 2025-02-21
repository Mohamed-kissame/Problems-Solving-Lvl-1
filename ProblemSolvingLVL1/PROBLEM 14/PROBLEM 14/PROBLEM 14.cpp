#include <iostream>

using namespace std;

void ReadNumbers(int &num1, int& num2) {

	cout << "ENTER PLEASE THE FIRST NUMBER :";
	cin >> num1;

	cout << "ENTER PLEASE THE SECOND NUMBER :";
	cin >> num2;
}

void Swap(int& num1, int& num2) {

	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

void PrintNumbers(int NUm1, int Num2) {

	cout << "\nNUMBER 1 = " << NUm1 ;

	cout << "\nNUMBER 2 = " << Num2 << endl;
}

int main() {

	int num1, num2;

	ReadNumbers(num1, num2);
	PrintNumbers(num1, num2);
	Swap(num1, num2);
	PrintNumbers(num1, num2);

	return 0;
}