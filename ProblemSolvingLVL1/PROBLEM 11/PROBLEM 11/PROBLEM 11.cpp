#include <iostream>

using namespace std;

enum enPassFAil {pass = 1 , Fail = 2};

 void ReadMarks(int marks[3]) {

	cout << "ENTER PLEASE THE FIRST MARK ? :";
	cin >> marks[0];

	cout << "ENTER THE SECOND MARK ? :";
	cin >> marks[1];

	cout << "ENTER THE LAST MARK ? :";
	cin >> marks[2];

 }

int SumOf3Marks (int marks[3]) {

	return marks[0] + marks[1] + marks[2];
}

float CalculatAverage(int marks[3]) {

	return (float)SumOf3Marks(marks) / 3;
}

enPassFAil checkAverage(float average) {

	if (average >= 50)
		return enPassFAil::pass;
	else
		return enPassFAil::Fail;
}

void PrintResults(float average){

	cout << "\nTHE RESULTS OF AVERAGE MARKS IS : " << average << endl;

	if (checkAverage(average) == enPassFAil::pass)
		cout << "\n You Passed";
	else
		cout << "\n You Faild";
}

int main() {

	int marks[3];

	ReadMarks(marks);
	PrintResults(CalculatAverage(marks));

	return 0;
}