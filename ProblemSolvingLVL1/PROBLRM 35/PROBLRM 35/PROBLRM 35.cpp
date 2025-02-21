#include <iostream>
#include <string>

using namespace std;

struct stPiggyBankContent
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{

	stPiggyBankContent PiggyBank;

	cout << "PLEASE ENTER THE NUMBER OF PENNIES ? :";
	cin >> PiggyBank.Pennies;

	cout << "PLEASE ENTER THE NUMBER OF NICKELS ? :";
	cin >> PiggyBank.Nickels;

	cout << "PLEASE ENTER THE NUMBER OF DIMES ?   :";
	cin >> PiggyBank.Dimes;

	cout << "PLEASE ENTER THE NUMBER OF QUARTERS ? :";
	cin >> PiggyBank.Quarters;

	cout << "PLEASE ENTER THE NUMBER OF DOLLARS ?  :";
	cin >> PiggyBank.Dollars;

	return PiggyBank;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContenet) {

	int ToTalPennies = PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 + 
		               PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 + 
		               PiggyBankContenet.Dollars * 100;

	return ToTalPennies;
}

int main() {

	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

	cout << endl << "TOTAL PENNIES = " << TotalPennies << endl;
	cout << endl << "TOTAL DOLLARS = " << (float)TotalPennies / 100 << endl;

	return 0;
}