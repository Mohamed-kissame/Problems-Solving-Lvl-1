#include <iostream>
#include<string>

using namespace std;

float ReadPositiveNumber(string Message) {

	float Number = 0 ;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;

}

float CalculateRemainder(float TotalBill, float TotalCashPaid) {

	return TotalBill - TotalCashPaid;
}

void PrintResults(float &TotalBill, float& TotalCashPaid) {

	TotalBill = ReadPositiveNumber("ENTER PLEASE TOTAL BILL ? ");
	TotalCashPaid = ReadPositiveNumber("ENTER PLEASE TOTAL CASH PAID ?");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;

	cout << "*****************************\n";
	cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;
}

int main() {

	float TotalBill, TotalCashPid;

	PrintResults(TotalBill, TotalCashPid);

	return 0;
}