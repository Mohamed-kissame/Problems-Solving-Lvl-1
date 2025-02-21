#include <iostream>
#include <string>

using namespace std;

float ReadPositveNumber(string Message) {

	float Number;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}
float HoursToDays(float NumberOfHours) {

	return (float)NumberOfHours / 24;
}
float HoursToWeeks(float NulberOfHours) {

	return (float)NulberOfHours / 24 / 7;
}
float DaysToWeeks(float NumberOfDays) {

	return (float)NumberOfDays / 7;
}

void PrintResults(float &NumberOfHours, float& NumberOfDays, float &NumberOfWeeks) {

	NumberOfHours = ReadPositveNumber("PLEASE ENTER NUMBER OF HOURS ");
	NumberOfDays = HoursToDays(NumberOfHours);
	NumberOfWeeks = DaysToWeeks(NumberOfDays);

	cout << endl;
	cout << "Total Hours = " << NumberOfHours << endl;
	cout << "Total Days = " << NumberOfDays << endl;
	cout << "Total weeks = " << HoursToWeeks(NumberOfHours) << endl;
}
int main() {

	float NumberOfHours, NumberOfDays, NumberOfWeeks;

	PrintResults(NumberOfHours, NumberOfDays, NumberOfWeeks);

	return 0;
}