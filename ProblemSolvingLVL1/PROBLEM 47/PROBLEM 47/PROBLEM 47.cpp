#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string Message) {

	float Number;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;

}

float TotalMonths(float LoanAmount, float MonthlyInstallment) {

	return (float)LoanAmount / MonthlyInstallment;
}

void PrintResults() {

	float LoanAmount = ReadPositiveNumber("ENTER PLEASE YOUR LOAN AMOUNT ?");
	float MonthlyInstallment = ReadPositiveNumber("ENTER PLEASE MONTHLY PAYAMENT ?");

	cout << "\nTotal Month to endly your Laon Amount = " << TotalMonths(LoanAmount, MonthlyInstallment) << " Months " << endl;
}
int main() {

	PrintResults();

	return 0;
}