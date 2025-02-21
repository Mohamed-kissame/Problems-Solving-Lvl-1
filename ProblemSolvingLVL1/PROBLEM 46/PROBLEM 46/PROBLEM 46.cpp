#include <iostream>
#include <string>

using namespace std;

void PrintLetterFromAtoZ() {

	for (int counter = 65; counter <= 90; counter++)

		cout << char(counter) << endl;
}
int main() {

	PrintLetterFromAtoZ();

	return 0;
}