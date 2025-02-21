#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string Message) {

	float Number = 0;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill) {

	 TotalBill = TotalBill * 1.1; 
	 TotalBill = TotalBill * 1.16;

	 return TotalBill;

}

void PrintResults(float TotalBill) {

	TotalBill = ReadPositiveNumber("PLEASE ENTER TOTAL BILL ?");

	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After Service Fee and Sales Tax = "
		<< TotalBillAfterServiceAndTax(TotalBill) << endl;
}

int main() {

	float TotalBill = 0;

	PrintResults(TotalBill);

	return 0;
}