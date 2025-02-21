#include <iostream>
#include <string>

using namespace std;

struct stTaskDuration {
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message){

	int Number;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

stTaskDuration ReadTaskDuration() {

	stTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = ReadPositiveNumber("Plaee enter the number of days ?");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter the number of hours ?");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter the number of minutes ?");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter the number of seconds ?");

	return TaskDuration;

}

int TaskDurationInSeconds(stTaskDuration TaskDuration) {

	int DurationTask = 0;

	DurationTask = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationTask += TaskDuration.NumberOfHours * 60 * 60;
	DurationTask += TaskDuration.NumberOfMinutes * 60;
	DurationTask += TaskDuration.NumberOfSeconds;

	return DurationTask;
	
}

int main() {

	cout << "\nTask Duration In Seconds is : " << TaskDurationInSeconds(ReadTaskDuration()) << endl;

	return 0;
}