#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string Message) {

	float Number;

	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return 0;
}

float TotalMonthlyInstallment(float LoanAmount, float HowManyMonths) {

	float MonthlyInstallment = LoanAmount / HowManyMonths;

	return MonthlyInstallment;
}

int main() {

	float LoanAmount = ReadPositiveNumber("Plaese Enter Your Loan Amount ?");
	float HowManyMonths = ReadPositiveNumber("Please Enter How Many Months To Settle The Loan ?");

	cout << "\nThe Monthly Installment Amount Is = " << TotalMonthlyInstallment(LoanAmount, HowManyMonths);
	cout << endl;

	return 0;
}