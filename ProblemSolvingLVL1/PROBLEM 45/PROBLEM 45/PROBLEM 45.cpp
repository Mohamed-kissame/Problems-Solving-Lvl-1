#include <iostream>
#include <string>

using namespace std;

enum enMonthOfYear {Jan = 1 , Feb = 2 , Mar = 3 , Apr = 4 , May = 5 , Jun = 6 ,
	                Jul = 7 , Aug = 8 , Sep = 9 , Oct = 10 , Nov = 11 , Dec = 12};

int ReadNumberInRange(string Message, int From, int To) {

	int Number;

	do{
		cout << Message << endl;
		cin >> Number;

	} while (Number < From || Number > To);

	return Number;

}

enMonthOfYear ReadMonthOfYear() {

	return (enMonthOfYear)ReadNumberInRange("Enter the number of month between [1 To 12]", 1, 12);
}

string GetMonthOfYear(enMonthOfYear Month) {

	switch (Month) {

	case enMonthOfYear::Jan:
		return "\nIts January";

	case enMonthOfYear::Feb:
		return "\nIts February";

	case enMonthOfYear::Mar:
		return "\nIts March";

	case enMonthOfYear::Apr:
		return "\nIts April";

	case enMonthOfYear::May:
		return "\nIts May";

	case enMonthOfYear::Jun:
		return "\nIts June";

	case enMonthOfYear::Jul:
		return "\nIts July";

	case enMonthOfYear::Aug:
		return "\nIts August";

	case enMonthOfYear::Sep:
		return "\nIts Septemeber";

	case enMonthOfYear::Oct:
		return "\nIts October";

	case enMonthOfYear::Nov:
		return "\nIts Novemebr";

	case enMonthOfYear::Dec:
		return "\nIts December";
	}
}
int main() {

	cout << GetMonthOfYear(ReadMonthOfYear()) << endl;

	return 0;
}