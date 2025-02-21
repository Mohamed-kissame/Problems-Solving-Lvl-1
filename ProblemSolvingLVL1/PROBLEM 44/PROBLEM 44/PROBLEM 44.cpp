#include<iostream>
#include <string>

using namespace std;

enum enDayOfWeek { Mon = 1 , Tue = 2 , Wed = 3 , Thu = 4 , Fri = 5 , Sat = 6 , Sun = 7};

int ReadNumberInRage(string Message , int From , int To) {

	int Number = 0;

	do {

		cout << Message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;

}

enDayOfWeek ReadDayOfWeek() {

	return (enDayOfWeek) ReadNumberInRage("Please enter day number between 1 and 7 ?", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day) {

	switch (Day) {

	case enDayOfWeek::Mon:
		return "\nIS MONDAY";

	case enDayOfWeek::Tue:
		return "\nIS TUESDAY";

	case enDayOfWeek::Wed:
		return "\nIS WEDNESDAY";

	case enDayOfWeek::Thu:
		return "\nIS THUSDAY";

	case enDayOfWeek::Fri:
		return "\nIS FRIDAY";

	case enDayOfWeek::Sat:
		return "\nIS SATURDAY";

	case enDayOfWeek::Sun:
		return "\nIS SUNDAY";
	
	}
}
int main() {

	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

	return 0;
}