#include <iostream>
using namespace std;

void ReadNumbers(int& number1, int &number2)
{

	cout << "ENTER PLEASE THE FIRST NUMBER : ";
	cin >> number1;

	cout << "ENTER PLEASE THE SECOND NUMBER : ";
	cin >> number2;

}

int Maxof2numbers(int num1, int num2) {

	if (num1 > num2)
		return num1;
	else
		return num2;
}

void PrintResults(int Max) {

	cout << "\nTHE MAX NUMBER IS : " << Max << endl;
}

int main() {

	int number1, number2;

	ReadNumbers(number1, number2);

	PrintResults(Maxof2numbers(number1, number2));

	return 0;
}