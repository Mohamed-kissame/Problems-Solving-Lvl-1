#include <iostream>
#include <string>

using namespace std;

void ReadNumber(float& Base, float& Hight) {

	cout << "ENTER PLEASE THE BASE OF TRIANGLE : ";
	cin >> Base;

	cout << "ENTER PLEASE THE HIGHT OF TRIANGLE :";
	cin >> Hight;
}

float CalculateAreaOfTriangle(float Base, float Hight) {

	return (float)(Hight / 2) * Base;
}

void PrintResults(float area) {

	cout << "\nTHE AREA OF TRIANGLE IS : " << area << endl;
}

int main() {

	float Base, Hight;

	ReadNumber(Base, Hight);

	PrintResults(CalculateAreaOfTriangle(Base, Hight));

	return 0;
}