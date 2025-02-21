#include <iostream>
using namespace std;

void ReadMarks(int Marks[3]) {

	cout << "ENTER PLEASE THE FIRST MARK ?  :";
	cin >> Marks[0];

	cout << "ENTER PLEASE THE SECOOND MARK? :";
	cin >> Marks[1];

	cout << "ENTER PLEASE THE LAST MARK ?   :";
	cin >> Marks[2];
}

int sumOf3Marks(int Marks[3]) {

	return Marks[0] + Marks[1] + Marks[2];
}

float CalculateAverage(int Marks[3]) {

	return (float)sumOf3Marks(Marks) / 3;
}

void PrintResults(float Average) {

	cout << "\nTHE AVERAGE OF YOUR MARKS IS : " << Average << endl;
}

int main() {

	int Marks[3];

	ReadMarks(Marks);

	PrintResults(CalculateAverage(Marks));

	return 0;
}