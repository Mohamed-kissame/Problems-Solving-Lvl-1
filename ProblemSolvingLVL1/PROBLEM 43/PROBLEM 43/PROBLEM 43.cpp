#include <iostream>
#include <string>

using namespace std;

struct stTaskDuration {

	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message) {

	int Number;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

stTaskDuration SecondsToTaskDuration(int TotalSeconds) {

	stTaskDuration TaskDuration;

	int Remainder = 0;

	const int SecondsPerDays = 24 * 60 * 60;
	const int SecondsPerHour = 60 * 60;
	const int SecondsPerMinutes = 60;

	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDays);
	Remainder = TotalSeconds % SecondsPerDays;

	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
	Remainder = Remainder % SecondsPerHour;

	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinutes);
	Remainder = Remainder % SecondsPerMinutes;

	TaskDuration.NumberOfSeconds = Remainder;

	return TaskDuration;


}

void PrintTaskDurationDetails(stTaskDuration TaskDuration) {

	cout << TaskDuration.NumberOfDays << ":" << TaskDuration.NumberOfHours << ":" << TaskDuration.NumberOfMinutes << ":" << TaskDuration.NumberOfSeconds << endl;
}

int main() {

	int TotalSeconds = ReadPositiveNumber("Please enter total seconds");
	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));

	return 0;
}